/*
 @file: pthreads_p2.cpp
 
 @author: student Gabriel Van Dreel, gvandree@uncc.edu
 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity 4-1-b
 */

#include <pthread.h>
#include <iostream>

using namespace std;


int userVals[10];


// This function shows the skeleton that pthread 
// functions must adhere to. 
// Copy this skeleton for any pthread function 
// you need to define. 
// In the copy, modify the name of the function 
// and the function body as needed. 
void *countNegatives(void *arg) {
   // TODO: Add code that implements
   //       the thread's functionality
   int totalNegatives = 0;
   for(int i = 0; i < 10; i++) {
      if(userVals[i] < 0) {
         totalNegatives++;
      }
   }
   cout << "\nTotal negative numbers: " << totalNegatives << endl;
   
   return 0;
}

void *average(void *arg) {
   
   double sum = 0;
   for(int i = 0; i < 10; i++) {
      sum += userVals[i];
   }
   cout << "\nAverage: " << (sum / 10) << endl;
   
   return 0;
}

void *reverse(void *arg) {
   
   cout << "\nThe numbers in reverse:\n";
   for(int i = 9; i >= 0; i--) {
      cout << userVals[i] << endl;
   }
   return 0;
}

int main() {
   // id is used to store a unique thread identifier,
   // returned by the call to create a new POSIX thread
   pthread_t id[3];
   
   // rc is used to store the code returned by the
   // call to create a new POSIX thread. The value is
   // zero (0) if the call succeeds.
   int rc;
   
   // TODO: Add code to perform any needed initialization
   //       or to process user input
   int i;
   void *(*functptr[3])(void*) = {countNegatives, average, reverse};
   for(i = 0; i < 10; i++) {
      cin >> userVals[i];
   }
   
   // Create thread(s)
   // TODO: Modify according to assignment requirements
   for(i = 0; i < 3; i++) {
      rc = pthread_create(&id[i], NULL, *functptr[i], NULL);

      if (rc){
         cout << "ERROR; return code from pthread_create() is " << rc << endl;
         return -1;
      }
   }

   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}

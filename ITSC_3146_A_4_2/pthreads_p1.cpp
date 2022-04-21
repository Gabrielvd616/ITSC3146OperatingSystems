/*
 @file: pthreads_p1.cpp
 
 @author: student Gabriel Van Dreel, gvandree@uncc.edu
 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity 4-1-a
 */

#include <pthread.h>
#include <iostream>

using namespace std;


const char* my_messages[4] = {"English: Hello!",
                              "French: Bonjour!",
                              "Spanish: Hola!",
                              "German: Guten Tag!"};


// This function shows the skeleton that pthread 
// functions must adhere to. 
// Copy this skeleton for any pthread function 
// you need to define. 
// In the copy, modify the name of the function 
// and the function body as needed. 
void *printMessage(void *arg) {
   // TODO: Add code that implements
   //       the thread's functionality
   int index = *((int*)arg);
   cout << my_messages[index] << endl;
   return 0;
}

int main() {
   // id is used to store a unique thread identifier,
   // returned by the call to create a new POSIX thread
   pthread_t ids[4];
   
   // rc is used to store the code returned by the
   // call to create a new POSIX thread. The value is
   // zero (0) if the call succeeds.
   int rc;
   
   // TODO: Add code to perform any needed initialization
   //       or to process user input
   int i, arrayIndexes[4];
   
   // Create thread(s)
   // TODO: Modify according to assignment requirements
   for(i = 0; i < 4; i++) {
      arrayIndexes[i] = i;
      rc = pthread_create(&ids[i], NULL, printMessage, (void*)&arrayIndexes[i]);
      
      if (rc) {
         cout << "ERROR; return code from pthread_create() is " << rc << endl;
         return -1;
      }
   }
   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}

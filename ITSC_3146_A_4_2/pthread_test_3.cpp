/**
 * @author Gabriel Van Dreel
 */

#include <pthread.h>
#include <iostream>

using namespace std;

void *printHello(void *arg) {
   int actual_arg = *((int*) arg);
   cout << "Hello World from thread with arg: " << actual_arg << "!\n";
   return 0;
}

int main() {
   pthread_t id;
   int rc, t;
   cout << "In main: creating thread \n";

   //Added prompt for user input to pass to thread
   cout << "Enter a number: ";
   cin >> t;
   rc = pthread_create(&id, NULL, printHello, (void*)&t);

   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }

   pthread_exit(0);
}

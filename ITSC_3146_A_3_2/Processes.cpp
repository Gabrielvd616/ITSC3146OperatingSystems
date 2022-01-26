//
//  Processes.cpp
//  ITSC 3146
//
//  Created by Bahamon, Julio on 1/12/17.
//


/*
 @file Processes.cpp
 @author Gabriel Van Dreel, gvandree@uncc.edu
 @description: A program that works with Linux processes.
 @course: ITSC 3146
 @assignment: in-class activity 3-2-1
 */


#ifndef Processes_cpp
#define Processes_cpp

#include "Processes.h"


using namespace std;


// Part 1: Working With Process IDs
pid_t getProcessID(void) {
   // TODO: Add your code here
   return getpid();
}


// Part 2: Working With Multiple Processes
string createNewProcess(void) {
   
   pid_t id = fork();
   
   // DO NOT CHANGE THIS LINE OF CODE
   process_id = id;
   
   
   if(id == -1) {
      return "Error creating process";
   }
   else if(id == 0) {
      // TODO: Add your code here
      cout << "I am a child process!" << endl;
      
      return "I am bored of my parent, switching programs now";
   }
   else {
      // TODO: Add your code here
      cout << "I just became a parent!" << endl;
      wait(NULL);
      
      return "My child process just terminated!";
   }
}


// Part 3: Working With External Commands"
void replaceProcess(char * args[]) {
   // Spawn a process to execute the user's command.
   pid_t id = fork();
   
   // TODO: Add your code here
   if(id == -1) {
      cout << "Error creating process" << endl;
   }
   else if(id == 0) {
      execvp(args[0], args);
   }
   else {
      wait(NULL);
   }
}

#endif /* TestProg_cpp */

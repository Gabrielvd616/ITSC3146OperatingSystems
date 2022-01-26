/*
 @file: process-fork-1.cpp

 @author: student Gabriel Van Dreel, gvandree@uncc.edu

 @description: A program that demonstrates processes.

 @course: ITSC 3146
 @assignment: In-class activity 3-2-1
 */

#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
	
	pid_t id = fork();

	if(id == -1) {
		cout << "Error creating process\n";
	} else if (id == 0) {
		cout << "I am a child process!\n";
	} else {
		cout << "I just became a parent!\n";
	}

	return 0;
}

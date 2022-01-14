/**
 * @author Gabriel Van Dreel
 */

#include<iostream>

using namespace std;

int main() {
	//Part 1a
	int myInt = 15;
	int* myPointer = &myInt;

	//Part 1bi
	cout << "Memory location of myInt: " << &myInt << endl;
	cout << "Value of myPointer: " << myPointer << endl;

	//Part 1bii
	cout << "\nValue of myInt: " << myInt << endl;
	cout << "Value pointed to by myPointer: " << *myPointer << endl;

	//Part 1ci
	myInt = 10;

	//Part 1cii
	cout << "\nMemory location of myInt: " << &myInt << endl;
	cout << "Value of myPointer: " << myPointer << endl;

	//Part 1ciii
	cout << "\nValue of myInt: " << myInt << endl;
	cout << "Value pointed to by myPointer: " << *myPointer << endl;

	return 0;
}

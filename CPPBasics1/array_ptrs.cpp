/**
 * @author Gabriel Van Dreel
 */

#include<iostream>

using namespace std;

int main() {
	//Defines an array of 4 integers
	int i, my_ints[4];
	
	//Assigns int array with user input
	cout << "Please input 4 integers:\n";
	for(i = 0; i < 4; i++) {
		cin >> my_ints[i];
	}

	//Defines an array of 4 int pointers
	int* my_ptrs[4];

	//Assigns pointers to point to corresponding elements of the int array
	for(i = 0; i < 4; i++) {
		my_ptrs[i] = &my_ints[i];
	}

	//Sorts the array of int pointers from least to greatest
	int* temp;
	int j;
	for(i = 0; i < 4; i++) {
		for(j = i + 1; j < 4; j++) {
			if(*my_ptrs[i] > *my_ptrs[j]) {
				temp = my_ptrs[i];
				my_ptrs[i] = my_ptrs[j];
				my_ptrs[j] = temp;
			}
		}
	}

	//Prints the integers pointed to by the int pointer array
	cout << "\nValues pointed to by each pointer:\n";
	for(i = 0; i < 4; i++) {
		cout << *my_ptrs[i] << " ";
	}
	cout << endl;

	return 0;
}

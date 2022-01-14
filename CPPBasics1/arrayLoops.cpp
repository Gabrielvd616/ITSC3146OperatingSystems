/**
 * @author Gabriel Van Dreel
 */

#include<iostream>

using namespace std;

int main() {
	//Accepts 10 integers from the user
	cout << "Please enter 10 integers:\n";
	int i, arr[10];
	for(i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	
	//Prints the numbers entered by the user in reverse order
	cout << "\nArray elements in reverse order:\n";
	for(i = 9; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	//Sorts the elements of the array from lowest to highest
	int j, temp;
	for(i = 0; i < 10; i++) {
		for(j = i + 1; j < 10; j++) {
			if(arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	//Prints the elements of the array in sorted order
	cout << "\nArray elements in sorted order:\n";
	for(i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}

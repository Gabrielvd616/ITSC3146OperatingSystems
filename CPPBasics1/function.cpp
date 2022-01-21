/**
 * @author Gabriel Van Dreel
 */

#include<iostream>

using namespace std;

//Swaps int addresses between two int pointers
void swapInts(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    //Prompts for and assigns user input
    int num1, num2;
    cout << "Please enter two integer values:\n";
    cin >> num1;
    cin >> num2;
    
    //Swaps input using swapInts function and displays values
    swapInts(num1, num2);
    cout << "\nSwapped values of num1 and num2:\n";
    cout << num1 << endl;
    cout << num2 << endl;
    
    return 0;
}

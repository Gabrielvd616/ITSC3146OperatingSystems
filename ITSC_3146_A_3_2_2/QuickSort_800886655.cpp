//
//  QuickSort_Skeleton.cpp
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//

/**
 * @author Gabriel Van Dreel
*/

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//  Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};

//  Implements function to display the contents of patient_list
void display(struct patient* patient_list, int total_patients) {
    for(int i = 0; i < total_patients; i++) {
        cout << "\tAge: " << patient_list[i].age << "\t\tName: "
             << patient_list[i].name << "\t\tBalance Due: "
             << patient_list[i].balance << endl;
    }
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY AGE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE AGE OF THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S AGE
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
int compareAge(const void* a, const void* b) {
    if(((struct patient*)a)->age < ((struct patient*)b)->age)
        return -1;
    else if(((struct patient*)a)->age == ((struct patient*)b)->age)
        return 0;
    else
        return 1;
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY BALANCE DUE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE BALANCE FOR THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S BALANCE
//       0 IF THE BALANCES ARE EQUAL
//       1 OTHERWISE
int compareBalance(const void* a, const void* b) {
    if(((struct patient*)a)->balance < ((struct patient*)b)->balance)
        return -1;
    else if(((struct patient*)a)->balance == ((struct patient*)b)->balance)
        return 0;
    else
        return 1;
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY NAME

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE NAME OF THE FIRST PATIENT GOES BEFORE
//         THE SECOND PATIENT'S NAME
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
//
//  HINT: USE THE strncmp FUNCTION
//  (SEE http://www.cplusplus.com/reference/cstring/strncmp/)
int compareName(const void* a, const void* b) {
    if(strncmp(((struct patient*)a)->name, ((struct patient*)b)->name, sizeof(((struct patient*)a)->name)) < 0)
        return -1;
    else if(strncmp(((struct patient*)a)->name, ((struct patient*)b)->name, sizeof(((struct patient*)a)->name)) == 0)
        return 0;
    else
        return 1;
}

//  The main program
int main() {
    int total_patients = 6;
    
    //  Storing some test data
    struct patient patient_list[total_patients] = {
        {25, "Juan Valdez", 1250},
        {15, "James Morris", 2100},
        {32, "Tyra Banks", 750},
        {62, "Maria O'Donell", 375},
        {53, "Pablo Picasso", 615},
        {21, "Gabriel Van Dreel", 200}
    };
    
    
    cout << "Patient List: " << endl;
    
    //  TODO:
    //  IMPLEMENT THE CODE TO DISPLAY THE CONTENTS
    //  OF THE ARRAY BEFORE SORTING
    display(patient_list, total_patients);
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT AGE
    qsort((void*)patient_list, total_patients, sizeof(patient_list[0]), compareAge);
    
    cout << "Patient List - Sorted by Age: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY AGE
    display(patient_list, total_patients);
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT BALANCE
    qsort((void*)patient_list, total_patients, sizeof(patient_list[0]), compareBalance);
    
    cout << "Patient List - Sorted by Balance Due: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY BALANCE
    display(patient_list, total_patients);
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT NAME
    qsort((void*)patient_list, total_patients, sizeof(patient_list[0]), compareName);
    
    cout << "Patient List - Sorted by Name: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY NAME
    display(patient_list, total_patients);
    
    cout << endl;
    
    return 0;
}

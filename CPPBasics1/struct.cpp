/**
 * @author Gabriel Van Dreel
 */

#include<iostream>
#include<cmath>

using namespace std;

//Declares user-defined type for Point in terms of struct CartesianCoordinate
typedef struct CartesianCoordinate {
    float x, y;
} Point;

//Performs distance calculation with two Point types using cmath functions
float calculateDistance(Point* p1, Point* p2) {
    return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));
}

int main() {
    //Initializes points 1 and 2 with user input
    Point p1, p2;
    
    cout << "Please enter the x and y coordinates of the first point:\n";
    cin >> p1.x;
    cin >> p1.y;
    
    cout << "\nPlease enter the x and y coordinates of the second point:\n";
    cin >> p2.x;
    cin >> p2.y;
    
    //Computes distance between points 1 and 2 and displays result
    cout << "\nThe distance between the two points is " << calculateDistance(&p1, &p2) << endl;
    
    return 0;
}
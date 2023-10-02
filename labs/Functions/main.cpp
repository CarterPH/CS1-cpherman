/*
Functions Lab
Updated By: Carter Herman
CSCI 111
Date: 9/20/2023

Program prompts the user to enter two points in the form (x1, y1) and (x2, y2) and finds the distance between the two points using a function.
Algorithm steps:
   1. Define a function called findDistance(…) that takes four parameters x1, y1 and x2, y2 as two points
       a. finds the distance between them using the equation: √((x2-x1)^2 + (y2-y1)^2)
       b. returns the calculated distance value
   2. Prompt user to enter two points in (x, y) format
   3. Store them into 4 individual variables
   4. Call function getDistance by passing 4 entered numbers as arguments
   5. Display results with proper description. Format output numbers to 2 decimal points.
   6. Test and validate that program output is correct for a given set of input points.
   7. BONUS - (10 points) Using a loop repeat step 2-6 until the user wants to quit.
*/

#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;

const float epsilon = 1e-5;

double findDistance(int, int, int, int);


void test();


void clearScreen() {

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int main() {

    int x1, y1, x2, y2;
    char ch;
        clearScreen();
        cout << "Program calculates distance betweem 2 points on a 2D coordinate." << endl;
        cout << "Enter a point in the form (x, y): " << endl;

        cin >> ch >> x1 >> ch >> y1 >> ch;
        printf("(x1, y1) = (%d, %d)\n", x1, y1);

        cout << "Enter a second point in the form (x, y): ";
        cin >> ch >> x2 >> ch >> y2 >> ch;
        

        double distance = findDistance(x1, y1, x2, y2);
        printf("(x2, y2) = (%d, %d)\n", x2, y2);
        cout << "The distance between points is: " << distance << endl;
        test();

    cin.ignore(1000, '\n');
    cout << "Enter to quit the program: ";
    cin.get();
    cout << "Good bye..." << endl;
    return 0;
}

double findDistance(int x1, int y1, int x2, int y2) {
  double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  return distance;
}

void test () {
    float result = findDistance (4, 3, 5, 1);
    float expected = 2.236067f;
    assert( fabs(result - expected) <= epsilon);
    float result2 = findDistance (1, 3, 9, 8);
    float expected2 = 9.433981f;
    assert( fabs(result2 - expected2) <= epsilon);
    float result3 = findDistance (31, 23, 53, 72);
    float expected3 = 53.712196f;
    assert( fabs(result3 - expected3) <= epsilon);

    cerr << "all tests passed..." << endl;

}
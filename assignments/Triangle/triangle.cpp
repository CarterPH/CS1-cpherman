/* 
    Name: Carter Herman
    Date: 9/20/2023
    CSCI 111

    Given the 3 sides of a triangle the program will calculate the area and perimeter.

*/

#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;


double findArea(double, double, double);

int main() {
    double a, b, c;
    char ch;

    cout << "This program take the 3 sides of a triangle and calculates the area and perimeter." << endl;
    cout << "Input the 3 sides of the triangle in the form of (a, b, c)" << endl;

    cin >> ch >> a >> ch >> b >> ch >> c >> ch;

    double perimeter = a + b + c;

    double area = findArea(a, b, c);

    bool valid;

    if (a + b > c && a + c > b && b + c > a) {
        valid = true;
    }
    else {
        valid = false;
    }

    cout << "The area of the trinangle is: " << area << endl;
    cout << "The perimeter of the triangle is: " << perimeter << endl;
    if (valid) {
        cout << "The triangle is a real triangle!" << endl;
    }
    else {
        cout << "This triangle is not real." << endl;
    }
    cin.get();

}

double findArea (double a, double b, double c) {
    
    double s = (a + b + c)/ 2.0;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}
/*
 Circle Lab
 By: Carter Herman
 CSCI 111
 Date: 9/19/2023

 This program prompts the user to enter the radius of a circle.
 It then calculates and displays it area and circumference.

 Algorithm steps:
 1. Prompt user to enter radius of a circle and store the radius into a variable
 2. Calculate area using the formula pi x radius x radius and store the value into a variable
 3. Calculate circumference using the formula 2 x pi x radius and store the value into a variable
 4. Output the calculated values for area and circumference

*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const double pi = 3.13159;

    double radius=0, area=0, circumference=0;

    string name "Anonymous";
    cout << "Hi there, what's your full name? ";
    getline(cin, name);

    cout << "Nice meeting you, " << name << "!" << endl;

    cout << name << ", please enter a radius of a circle: ";
    cin >> radius;

    area = pi * pow(radius, 2);
    circumference = 2 * pi * radius;

    cout << "Your circle has radius: " << fixed << setprecision(6) << radius << endl:
    cout << "Area of the circle is:\t" << area << '\n';
    cout << "Circumference of the circle is: " << circumference << endl;

    cout << "Good bye... \nHit enter to exit the program!" << "\n";
    cin.ignore(1000, '\n');

    cin.get();
    return 0;


}
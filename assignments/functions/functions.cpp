/* 
Carter Herman
CSCI 111
10/07/2023

This is a program that is a basic calculator using functions,

*/




#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;

void main() {
    float in1;
    float in2;

    cout << "Please input your first number." << endl;
    cin >> in1;

    cout << "Please input your second number. " << endl;
    cin >> in2;



}

void sum(float in2, float in1) {
    float sum = in1 + in2;
    cout << "The sum of your numbers is " << sum << endl;
    
    return main();
}

void product(float in2, float in1) {
    float product = in1 * in2;
    cout << "The product of your numbers is " << product << endl;
    
    return main();
}

void difference(float in2, float in1) {
    float diff = in1 - in2;
    cout << "The difference of your numbers is " << diff << endl;
    
    return main();
}
void quotient(float in2, float in1) {
    float quot = in1 / in2;
    cout << "The quotient of your numbers is " << quot << endl;
    
    return main();
}
void rem(int in2, int in1) {
    float rem = in1 % in2;
    cout << "The remainder of your numbers is " << rem << endl;
    
    return main();
}
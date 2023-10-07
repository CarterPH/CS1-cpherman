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

    sum(in1, in2);
    product(in1, in2);
    difference(in1, in2);
    quotient(in1, in2);
    rem(in1, in2);
    power(in1, in2);
    sr(in1);

}

void sum(float in2, float in1) {
    float sum = in1 + in2;
    cout << "The sum of your numbers is " << sum << endl;
    
    return;
}

void product(float in2, float in1) {
    float product = in1 * in2;
    cout << "The product of your numbers is " << product << endl;
    
    return;
}

void difference(float in2, float in1) {
    float diff = in1 - in2;
    cout << "The difference of your numbers is " << diff << endl;
    
    return;
}
void quotient(float in2, float in1) {
    float quot = in1 / in2;
    cout << "The quotient of your numbers is " << quot << endl;
    
    return;
}
void rem(int in2, int in1) {
    float rem = in1 % in2;
    cout << "The remainder of your numbers is " << rem << endl;
    
    return;
}
void power(float in2, float in1) {
    float power = pow(in1, in2);
    cout << in1 << " to the power of " << in2 << "equals " << power << endl;
    
    return;
}
void sr(float in1) {
    float sq = sqrt(in1);

    cout << "The square root of your first number is " << sq << endl;

    return;
}
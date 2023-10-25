/*

Carter Herman
Due: 10/25/23


The program uses functions to give the player a random number to guess.


*/


#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;

int randomNumber() {
    return rand() % 20 + 1; // random # between 1-20
}

int readNumber() {
    int g; //guess variable
    
    do {
        std::cout << "Please enter your guess (between 1 and 20): ";
        std::cin >> g;
    } while (g < 1 || g > 20);

    return g;
}
/*
Carter Herman
CSCI 111 Section 02
11:00 am - 11:50 am M-F

This program prints each step of the game hangman with input from the user of what their name is.


*/

#include <iostream>
using namespace std;

int main() {

    string name;
    cout << "Hello! Whats your name? ";
    getline(cin, name);

    cout << "\nHello "<<name << "\n";
    cout << "\nHangman is current under construction, maybe you'll see it in a couple of weeks... ";
    cout << "\nHere are what the stages will look like!\n";
    return 0;


}
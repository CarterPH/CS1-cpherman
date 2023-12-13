/*

Carter Herman
11/28/2023


This program will read information from serveral files in order to create a fun and engaging hangman game.



*/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include <vector>

using namespace std;

int main() {
    const int MAXL = 100;
    const int MAXS = 100;

    string words[MAXS];

    ifstream inputFile("words.txt");

    unsigned ran = time(0);
    srand(ran);

    cout<<"Welcome to Hangman!"<<endl;
    cout<<"You will be given a random word from a list of 100 words."<<endl;
    cout<<"You will have 6 guesses to guess the word."<<endl;
    cout<<"If you guess the word correctly, you win!"<<endl;
    cout<<"If you run out of guesses, you lose!"<<endl;
    cout<<"Good luck!"<<endl;

    cout<< "Press enter to continue...";
    cin.get();



}
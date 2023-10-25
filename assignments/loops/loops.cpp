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

int checkGuess(int num1, int num2) {
    if (num1 == num2) {
        return 0;
    }
    else if (num1 < num2) {
        return -1;
    }
    else {
        return 2;
    }
}

void test() {

    assert(checkGuess(2, 3) == -1);
    assert(checkGuess(3, 3) == 0);
    assert(checkGuess(4, 3) == 2);
}

void game() {
    int num = randomNumber();
    int attempts = 0;

    do {
        int guess = readNumber();
        int res = checkGuess(guess, num);

        if (res == 0) {
            cout << "You guessed the number!\n";
            break;
        }
        else {
            attempts++;
            cout << "Wrong. Try guessing ";
            if (res == -1) {
                cout << "higher!\n";
            }
            else {
                cout << "lower!\n";
            }
        }
        if (attempts == 6) {
            cout << "You took too many tries to guess the number.\n The correct number was " << num << ".\n";
            break;
        }
    } while (true);
}

int main() {
    char playAgain;
    int gamesPlayed = 0, gamesWon = 0;

    string name = "Anonymous";
    cout << "Hi there, what's your name? ";
    getline(cin, name);

    cout << "Nice meeting you, " << name << "!" << endl;
    cout << "I am thinking of a number between 1 and 20! \n";
    cout << "You have 6 guesses to find the number. \n";
    do {
        test();

        game();

        gamesPlayed++;

        std::cout << "Do you want to play again? (Y/N) ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing. Here are your statistics! \n";
    

}
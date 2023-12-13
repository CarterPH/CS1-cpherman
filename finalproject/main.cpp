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

const int MAX_TRIES = 6;

void readData(const int, ifstream &, string[]);
void writeFile(const int[], ofstream &, const string[], int);
int letterAmt(const string [], char [], const int);
void ascii(int);
int guess(const string[], char[], int &maxTries, int wordIndex);

int main() {
    const int MAXL = 100;
    const int MAXS = 100;

    string words[MAXS];
    ifstream inputFile;
    inputFile.open("words.txt");

    unsigned ran = time(0);
    srand(ran);

    cout << "Welcome to Hangman!" << endl;
    cout << "You will be given a random word from a list of 100 words." << endl;
    cout << "You will have 6 guesses to guess the word." << endl;
    cout << "If you guess the word correctly, you win!" << endl;
    cout << "If you run out of guesses, you lose!" << endl;
    cout << "Good luck!" << endl;

    cout << "Press enter to continue...";
    cin.get();

    int tryAmt = 0;
    int gamesWon = 0;
    char option;

    int scoreList[MAXL];
    string wordList[MAXL];

    readData(MAXL, inputFile, words);

    do {
        system("clear");
        int wordIndex = rand() %  12;
        int maxTries = MAX_TRIES;
        char blank[MAXS] = {}; 
        int gameScore = guess(words, blank, maxTries, wordIndex);

        scoreList[tryAmt] = gameScore;
        wordList[tryAmt] = words[wordIndex];
        tryAmt++;
        
        if (gameScore == words[wordIndex].length()) {
            gamesWon++;
        }

        cout << "Games won: " << gamesWon << endl;

        cout << "Would you like to play again? (y/n)" << endl;
        cin >> option;
    } while (option == 'y' || option == 'Y');
    
    inputFile.close();

    ofstream outputFile;
    outputFile.open("scores.txt");

    writeFile(scoreList, outputFile, wordList, tryAmt);

    outputFile.close();

    return 0;

}

void readData(const int MAXL, ifstream &inputFile, string words[]) {
    for (int i = 0; i < MAXL; i++) {
        inputFile >> words[i];
    }
}

void writeFile(const int scoreList[], ofstream &outputFile, const string wordList[], int tryAmt) {
    for (int i = 0; i < tryAmt; i++) {
        outputFile << wordList[i] << " " << scoreList[i] << endl;
    }
}

int letterAmt(const string words[], char blank[], int MAXL) {
    int randomWord = rand() % 12;

    for (std::string::size_type i = 0; i < words[randomWord].length(); i++) {
        blank[i] = '_';
        cout << blank[i] << " ";
    }
    cout << endl;
    return randomWord;
}

int guess(const string words[], char blank[], int &maxTries, int wordIndex) {
    int score = 0;
    int guessAmt = 0;
    char guessedLetters[26] = {};
    const int MAX_WORD_LENGTH = words[wordIndex].length();

    while (guessAmt < MAX_TRIES && maxTries > 0) {
        cout << "Your word: ";
        for (int i = 0; i < MAX_WORD_LENGTH; i++) {
            if (guessedLetters[tolower(words[wordIndex][i]) - 'a'] || words[wordIndex][i] == ' ') {
                cout << words[wordIndex][i] << " ";
            } else {
                cout << "_ ";
            }
        }
        cout << endl;

        cout << "Guessed letters: ";
        for (char letter = 'a'; letter <= 'z'; letter++) {
            if (guessedLetters[letter - 'a']) {
                cout << letter << " ";
            }
        }
        cout << endl;

        cout << "Guess a letter: ";
        char guess;
        cin >> guess;

        if (!(('a' <= guess && guess <= 'z') || ('A' <= guess && guess <= 'Z'))) {
            cout << "Invalid input. Please enter a letter." << endl;
            continue;
        }

        guess = tolower(guess);

        if (guessedLetters[guess - 'a']) {
            cout << "You already guessed '" << guess << "'. Try another letter." << endl;
            continue;
        }

        guessedLetters[guess - 'a'] = true;

        bool correctGuess = false;
        for (int i = 0; i < MAX_WORD_LENGTH; i++) {
            if (guess == tolower(words[wordIndex][i])) {
                if (blank[i] == '_') {
                    blank[i] = words[wordIndex][i];
                    
                }
                correctGuess = true;
                score = score + 1;
            }
        }

        if (correctGuess) {
        cout << "Your word: ";
        for (int i = 0; i < MAX_WORD_LENGTH; i++) {
            cout << blank[i] << " ";
        }
        cout << endl;
        } else {
            maxTries--;
            ascii(MAX_TRIES - maxTries);
            guessAmt++;
        }
        if (score == MAX_WORD_LENGTH) {
            cout << "Congratulations! You guessed the word: " << words[wordIndex] << endl;
            break;
        }
    }

    
    cout << "Your word: ";
    for (int i = 0; i < MAX_WORD_LENGTH; i++) {
        if (guessedLetters[tolower(words[wordIndex][i]) - 'a'] || words[wordIndex][i] == ' ') {
            cout << words[wordIndex][i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;

    if (score != MAX_WORD_LENGTH) {
        cout << "Sorry, you ran out of guesses. The word was: " << words[wordIndex] << endl;
        ascii(MAX_TRIES - maxTries);
    }

    return score;
}




void ascii(int wrong) {
    cout << "\t\t  _______" << endl;
    cout << "\t\t  |     |" << endl;

    if (wrong >= 1) {
        cout << "\t\t  |     O" << endl;
    }
    if (wrong >= 2) {
        cout << "\t\t  |     |" << endl;
    }
    if (wrong >= 3) {
        cout << "\t\t  |    /|\\ " << endl;
    }
    if (wrong >= 4) {
        cout << "\t\t  |    / \\" << endl;
    }

    cout << "\t\t__|__" << endl;
}


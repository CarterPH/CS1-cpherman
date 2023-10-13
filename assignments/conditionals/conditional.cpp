/*

Carter Herman
10/13/23

This program takes 5 numbers and outputs the different solutions to them.


*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>

using namespace std;

void printMenu(void);

void getFiveNumbers(double &, double &, double &, double &, double &);

double findSum(const double &, const double &, const double &, const double &, const double &);

double findDifference(const double &, const double &, const double &, const double &, const double &);

double findProduct(const double &, const double &, const double &, const double &, const double &);

double findQuotient(const double &, const double &, const double &, const double &, const double &);

void findAverage(const double &, const double &, const double &, const double &, const double &);

double findLarger(const double &, const double &, const double &, const double &, const double &);

double findSmaller(const double &, const double &, const double &, const double &, const double &);

void test();

bool program();

void clearScreen() {
    #ifdef _WIN32
        system("cIS");
    #else
        system("clear");
    #endif
}

int main (int argc, char* argv[]) {
    bool keepRunning = true;
    if (argc == 5 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS);
    }
    else {
        while (true) {
            if (!program())
                break;
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Enter to quit the program.\n";
    cout << "Good bye..." << endl;
    cin.get();
    return 0;
}
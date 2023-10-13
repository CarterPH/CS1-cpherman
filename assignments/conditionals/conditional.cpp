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

double findProduct(const double &, const double &, const double &, const double &, const double &);

void findAverage(const double &, const double &, const double &, const double &, const double &);

double findLarger(const double &, const double &, const double &, const double &, const double &);

double findSmaller(const double &, const double &, const double &, const double &, const double &);

double findEOZ(const double &, const double &, const double &, const double &, const double &);

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
void printMenu(void) {
    cout << "Menu options:\n";
    cout << "[1] Add five numbers\n";
    cout << "[2] Multiply five numbers\n";
    cout << "[3] Find the average of the five numbers\n";
    cout << "[4] Find the largest of the five numbers\n";
    cout << "[5] Find the smallest of the five numbers\n";
    cout << "[6] Find if the sum of the five numbers is odd, even, or zero.";

}

void getFiveNumbers(double &n1, double &n2, double &n3, double &n4, double &n5) {
    cout << "Enter five numbers seperated by a space: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}

double findSum(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    return (n1 + n2 + n3 + n4 + n5);
}
double findProfuct(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    return (n1 * n2 * n3 * n4 * n5);
}
void findAverage(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5, double &avg) {
    avg = findSum(n1, n2, n3, n4, n5)/ 5;
}
double findLarger(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    
}
double findSmaller(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    
}



void test() {
    double answer
}
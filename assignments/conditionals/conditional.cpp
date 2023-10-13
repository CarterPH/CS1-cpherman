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

bool findEOZ(const double &, const double &, const double &, const double &, const double &);

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
    cout << "[6] Find if the sum of the five numbers is odd, even, or zero.\n";

}

void getFiveNumbers(double &n1, double &n2, double &n3, double &n4, double &n5) {
    cout << "Enter five numbers seperated by a space: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}

double findSum(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    return (n1 + n2 + n3 + n4 + n5);
}
double findProduct(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    return (n1 * n2 * n3 * n4 * n5);
}
void findAverage(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5, double &avg) {
    avg = findSum(n1, n2, n3, n4, n5)/ 5;
}
double findLarger(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5) {
        return n1;
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5) {
        return n2;
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5) {
        return n3;
    }
    else if (n4 > n1 && n4 > n2 && n4 > n4 && n4 > n5) {
        return n4;
    }
    else {
        return n5;
    }
}
double findSmaller(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) {
        return n1;
    }
    else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) {
        return n2;
    }
    else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) {
        return n3;
    }
    else if (n4 < n1 && n4 < n2 && n4 < n4 && n4 < n5) {
        return n4;
    }
    else {
        return n5;
    }
}
bool findEOZ(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    int sum = findSum(n1, n2, n3, n4, n5);

    if (sum % 2 == 0){
        return true;
    }
    else if (sum == 0) {
        return 0;
    }
    else {
        return false;
    }
}



void test() {
    double answer = findSum(10, 12.5, 1.1, 0.01, 22);
    double expected = 46.61;
    assert(answer == expected); 
    assert(findSum(-5, 10.5, -11, -41, 11) == -35.5);
    assert(findSum(4, 8, 11, 3, 6) == 32);

    double answer2 = findProduct(2, 1, 11, 23, 12);
    double expected2 = 6072;
    assert(answer2 == expected2);
    assert(findProduct(5, 3, -1, -14, 11) == 2310);
    assert(findProduct(15, 12, 7, 6, 1) == 7560);

    double answer3 = findLarger(2, 1, -10, 3, 19);
    double expected3 = 19;
    assert(answer3 == expected3);
    assert(findLarger(5, 3, -4, 1, 10) == 10);
    assert(findLarger(15, 12, 7, 6, 1) == 15);

    double answer4 = findSmaller(2, 1, -15, 7, 2.2);
    double expected4 = -15;
    assert(answer4 == expected4);
    assert(findSmaller(5, 3, -3.14, 10, 11) == -3.14);
    assert(findSmaller(15, 12, 7, 6, 1) == 1);

    assert(findEOZ(2, 1, 6, 9, 11) == false);
    assert(findEOZ(2, 8, 6, 9, 5) == true);
    assert(findEOZ(-7, 1, 6, -9, 9) == 0);


    double avg;
    findAverage(2, 1, 11, -1, -9, avg);
    double expected7 = 0.8;
    assert(avg == expected7);
    findAverage(6, 2, 11, 101, 6, avg);
    double expected8 = 121.2;
    assert(avg == expected8);
    findAverage(1, 2, 3, 4, 5, avg);
    double expected9 = 3;
    printf("%s\n", "all test cases passed..."); 
}

bool program() {
    int option = 1;
    double num1=0, num2=0, num3=0, num4=0, num5=0;
    string name = "Anonymous";
    cout << "Hi there, what's your name? ";
    getline(cin, name);
    cout << "Nice meeting you, " << name << "!" << endl;
    printMenu();

    do {
        if (cin >> option && option >= 1 && option <= 7) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value betweem 1 and 6" << endl;
        }
    } while(true);

    switch(option) {
        case 1:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);

            double sum = findSum(num1, num2, num3, num4, num5);
            printf("%.2f + %.2f + %.2f + %.2f + %.2f = %.2f\n", num1, num2, num3, num4, num5, sum);
            break;

        }
        case 2:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);

            double product = findProduct(num1, num2, num3, num4, num5);
            printf("%.2f * %.2f * %.2f * %.2f * %.2f = %.2f\n", num1, num2, num3, num4, num5, product);
            break;
        }
        case 3:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);

            double avg;
            findAverage(num1, num2, num3, num4, num5, avg);
            printf("%.2f + %.2f + %.2f + %.2f + %.2f / 5 = %.2f\n", num1, num2, num3, num4, num5, avg);
            break;
        }
        case 4:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);

            double max = findLarger(num1, num2, num3, num4, num5);
            printf("The largest between all five numbers is %.2f\n", max);

        }
        case 5:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);

            double min = findSmaller(num1, num2, num3, num4, num5);
            printf("The smallest between all five numbers is %.2f\n", min);
            
        }
        case 6:
        {
            getFiveNumbers(num1, num2, num3, num4, num5);
            bool eoz = findEOZ(num1, num2, num3, num4, num5);

            if (eoz = true) {
                printf ("The sum of all your numbers is even.");
            }
            else if (eoz = false) {
                printf("The sum of all your numbers is odd.");
            }
            else {
                printf("Your number is equal to 0.");
            }

            
        }
        case 7:
        default:
            return false;
    }
    return true;
}
//  Pointers, enum type and namespace lab
//  Updated by: Carter Herman
//  Date: 10/10/23
//  Program demonstrates the use of preprocessor directive, namespace, enum type,
//  and pointers.

#include <cstdio>
#include <iostream>

using namespace std;

// macro function
#ifdef _WIN32
#define clear() system("cls")
#else
#define clear() system("clear")
#endif

// user-defined enumerated type OPERATION
enum OPERATION { ADD, MULTIPLY, SUBTRACT, LARGER, QUIT };

// C++ way of defining type alias
using big_int = long long int;

// C way of defining type alias
typedef long long int large_int;
// both large_int and big_int are alias to long long int type

// declare MyFunctions namespace
namespace MyFunctions {
    // function prototypes defined within the namespace
    big_int findSum(const big_int *, const big_int *);
    big_int findLarger(const big_int *, const big_int *);
    large_int findProduct(const large_int &, const large_int &);
    large_int findDifference(const large_int &, const large_int &);
}

void showMenu(void);
OPERATION getOperation(char);

int main(int argc, char* argv[]) {
    char input;
    big_int *num1; // a pointer to point that points to unsigned int aka big_int data type
    num1 = new big_int; //allocate memory in heap and store the address in num1
    big_int *num2 = new big_int; //declare num2 as a dynamic variable
    large_int *sum = new large_int; //declare sum as a dynamic variable
    large_int *prod = new large_int;
    // FIXME3 - declare dynamic variables to store difference and larger values
    large_int *diff = new large_int;
    big_int *larger = new big_int; // fixed
    // Must use these variables to store the returned values from functions

    OPERATION oper;
    do { //fixed
        //FIXME4: Add do... while loop to continue the program until the user wants to quit
        //FIXME5: call clear function defined above to clear the screen
        clear(); //fixed
        showMenu();
        cin >> input;
        oper = getOperation(input);
        switch (oper) {
            case ADD:
                cout << "Enter two whole numbers separated by space: ";
                // store the data by dereferencing pointers
                cin >> *num1 >> *num2;
                // passing pointers to findSum function
                *sum = MyFunctions::findSum(num1, num2);
                printf("%lld + %lld = %lld\n", *num1, *num2, *sum);
                break;
                // FIXME6: complete the rest of the cases to perform other operations
            case MULTIPLY:
                cout << "Enter two whole numbers separated by space: ";
                // store the data by dereferencing pointers
                cin >> *num1 >> *num2;
                // passing pointers to findSum function
                *prod = MyFunctions::findProduct(*num1, *num2);
                printf("%lld * %lld = %lld\n", *num1, *num2, *prod);
                break;
            case SUBTRACT:
                cout << "Enter two whole numbers seperated by space: ";
                cin >> *num1 >> *num2;
                *diff = MyFunctions::findDifference(*num1, *num2);
                printf("%lld - %lld = %lld\n", *num1, *num2, *diff);
                break;
            case LARGER: //fixed
                cout << "Enter two whole numbers seperated by space: ";
                cin >> *num1 >> *num2;
                *larger = MyFunctions::findLarger(num1, num2);
                printf("The larger of %lld and %lld is %lld\n", *num1, *num2, *larger);
                break;
            default:
                break;
        }
        cin.ignore(1000, '\n');
        cout << "Enter Y or y if you want to continue and any other key if you want to exit. ";
        cin >> input;
    }while (input == 'y' || input == 'Y');
    delete num1;
    delete num2;
    delete sum;
    delete prod;
    cin.ignore(1000, '\n');
    cout << "Good bye! Enter to exit the program...";
    cin.get();
    return 0;
}

void showMenu(void) {
    cout << "Enter one of the following menu options:\n";
    cout << "[1] Add two integers\n";
    cout << "[2] Multiply two integers\n";
    cout << "[3] Subtract one integer from another\n";
    cout << "[4] Quit the program\n";
    cout << "Enter your choice [1-4]: ";
}

// function returns OPERATION type given character choice
OPERATION getOperation(char choice) {
    OPERATION op;
    switch(choice)
    {
        case '1':
            op = ADD;
            break;
        case '2':
            op = MULTIPLY;
            break;
        case '3':
            op = SUBTRACT;
            break;
        // FIXME7 - add case for LARGER
        case '4': // fixed
            op = LARGER;
            break;
        default:
            op = QUIT;
    }
    return op;
}

// must use MyFunctions namespace to resolve findSum function
big_int MyFunctions::findSum(const big_int *n1, const big_int *n2) {
    // deference pointers n1 and n2 before adding their values
    return (*n1) + (*n2);
}

// FIXME8: define findLarger function declared inside MyFunctions namespace
// function returns the larger of the two given values
big_int MyFunctions::findLarger(const big_int *n1, const big_int *n2) {
    if (*n1 > *n2) {
        return (*n1);
    }
    else if (*n2 > *n1) {
        return (*n2);
    }
    else {
        return 0;
    }
} //fixed

large_int MyFunctions::findProduct(const large_int &n1, const large_int &n2) {
    return n1 * n2;
}

// FIXME9: define findDifference function declared inside MyFunctions namespace
// return the value of second big_int subtracted from the first
large_int MyFunctions::findDifference(const large_int &n1, const large_int &n2) {
    return n1 - n2;
} // fixed
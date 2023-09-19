#include <iostream>
using namespace std;

int addNums(int num1, int num2) {
    int sum;
    sum = num1 + num2;
    return sum;
}

int main() {
    int num1, num2, sum;
    num1= 42;
    num2 = 15;
    sum = addNums(num1, num2);
    cout << "sum: " << sum << endl;
}
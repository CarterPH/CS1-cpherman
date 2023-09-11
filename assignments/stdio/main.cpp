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
    cin.get();
    cout << "\nHangman is current under construction, maybe you'll see it in a couple of weeks... ";
    cout << "\nHere are what the stages will look like!\n";
    cin.get();

    std::cout << R"(
        Stage 0

        |----------------- 						
        |/        	| 
        | 	
        |
        | 	
        |
        | 				              
        ===========	

    )"; // https://cplusplus.com/forum/general/58945/
    cin.get();
    std::cout << R"(
        Stage 1

        |----------------- 						
        |/         | 
        |         (_)
        |
        | 	
        |
        | 				              
        ===========	

    )"; 
    cin.get();
    std::cout << R"(
        Stage 2

        |----------------- 						
        |/         | 
        |         (_)
        |          |
        |          
        |         
        | 				              
        ===========		

    )"; 
    cin.get();
    std::cout << R"(
        Stage 3

        |----------------- 						
        |/         | 
        |         (_)
        |         \|
        |          
        |         
        | 				              
        ===========		

    )"; 
    cin.get();
    std::cout << R"(
        Stage 4

        |----------------- 						
        |/         | 
        |         (_)
        |         \|/
        |          
        |         
        | 				              
        ===========	

    )"; 
    cin.get();
    std::cout << R"(
        Stage 5

        |----------------- 						
        |/         | 
        |         (_)
        |         \|/
        |          |
        |         
        | 				              
        ===========	

    )"; 
    cin.get();
    std::cout << R"(
        Stage 6

        |----------------- 						
        |/         | 
        |         (_)
        |         \|/
        |          |
        |         /
        | 				              
        ===========	

    )";
    cin.get();
    std::cout << R"(
        Stage 7

        |----------------- 						
        |/         | 
        |         (_)
        |         \|/
        |          |
        |         / \
        | 				              
        ===========	

    )";
    cin.get();
    return 0;


}
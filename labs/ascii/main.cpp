/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: Carter Herman
    Date: 8/31/2023
    
    This program produces an ASCII art on the console.

    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main()
{
    string name;
    cout << "Hello! What is your name? \n";
    getline(cin, name);
    
    cout << "Nice meeting you, " << name << "!\n";

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 = "  |\\_/|   **********************    (\\_/)\n";
    cout << line1;

    //FIXME6: use variable to print the second line line of the graphic
    //FIXME7: print the third line of the graphics
    //FIXME8: use variable to print the fourth line
    //FIXME9: use variable to print the fifth line
    //Note: You can add more lines or print more ASCII arts of your choice if you'd like...

    cout << "\nGood bye... hit enter to exit the program: " << '\n';
    //FIXME10: make the console wait for user input

    return 0; //exit program by returning 0 status to the system
}
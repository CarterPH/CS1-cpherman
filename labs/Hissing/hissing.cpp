/*
Kattis - Hissing Microphone Problem

By: Carter Herman
Date: 11/1/2023

Hissing Microphone Problem Statement: https://open.kattis.com/problems/hissingmicrophone
Algorithm steps:
1. Read string
2. find "ss" substring in the string
    - if found, print "hiss"
    - otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function prototypes
string answer(const string &line);
void testAnswer();
void solve();

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else
        solve();
}

string answer(const string &line) { //fixed
    for(int i = 0; i < line.length(); i++) {
      if(line[i]=='s') {
          if(line[i+1]=='s') {
              return "hiss";
          }
      }
     
  }
  
  return "no hiss";
    
}

// unit testing answer()
void testAnswer() {
    // FIXME4
    // write at least two test cases to test answer()
    assert(answer("kiss") == "hiss");
    assert(answer("cold") == "no hiss");
    cerr << "All test cases passed!\n";
} // fixed

// solving the problem for kattis
void solve() {
    string line;
    // string consists of only lowercase letters (no spaces) upto 30 chars
    // FIXME5
    // read string into line
    cout << "Please enter a max 30 character phrase." << endl;
    cin >> line;
    cout << answer(line) << endl;
} // fixed
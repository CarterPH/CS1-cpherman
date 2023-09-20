/*
Functions Lab
Updated By: Carter Herman
CSCI 111
Date: 9/20/2023

Program prompts the user to enter two points in the form (x1, y1) and (x2, y2) and finds the distance between the two points using a function.
Algorithm steps:
   1. Define a function called findDistance(…) that takes four parameters x1, y1 and x2, y2 as two points
       a. finds the distance between them using the equation: √((x2-x1)^2 + (y2-y1)^2)
       b. returns the calculated distance value
   2. Prompt user to enter two points in (x, y) format
   3. Store them into 4 individual variables
   4. Call function getDistance by passing 4 entered numbers as arguments
   5. Display results with proper description. Format output numbers to 2 decimal points.
   6. Test and validate that program output is correct for a given set of input points.
   7. BONUS - (10 points) Using a loop repeat step 2-6 until the user wants to quit.
*/

#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;

const float epsilon = 1e-5;
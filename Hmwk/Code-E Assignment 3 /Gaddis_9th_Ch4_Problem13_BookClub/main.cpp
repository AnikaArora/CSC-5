/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/21/20 at 11:30PM 
 * Purpose: Book Club Points 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int books; 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter how many books you purchased this month:\n"; 
    cin>>books; 
    
    //Display Outputs
    if (books == 0) 
    {
        cout<<"You earned 0 points."; 
    }
    else if (books == 1) 
    {
        cout<<"You earned 5 points."; 
    }
    else if (books == 2) 
    {
        cout<<"You earned 15 points."; 
    }
    else if (books == 3) 
    {
        cout<<"You earned 30 points."; 
    }
    else if (books >= 4) 
    {
        cout<<"You earned 60 points."; 
    }
    else 
    {
        cout<<"That is an incorrect number of books.";
    }
    
    //Exit stage right!
    return 0;
}
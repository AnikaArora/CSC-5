/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on January 16, 2020, 3:43 PM
 * Purpose:  Average of 5 test scores inputted by the user 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constant 
    double score, average, score1, score2, score3, score4, score5; 
    //Initialize Variables
    average = 0; 
    
    //Process or map Inputs to Outputs
    cout<<"Input 5 numbers to average.\n"; 
    cin>>score1>>score2>>score3>>score4>>score5; 
    score = score1 + score2 + score3 + score4 + score5; 
    average = score/5; 
    //Display Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average = "<<average;
    //Exit stage right!
    return 0;
}
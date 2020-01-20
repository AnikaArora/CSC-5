/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 12, 2020, 7:58 PM
 * Purpose:  Free Fall homework problem 
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
    int time, freeFallDistance, accelerationTimesTime, acceleration; 
    
    //Process or map Inputs to Outputs
    cout << "Input a number of seconds and press return: "; 
    cin >> time; 
    freeFallDistance = (32 * time *time); 
    freeFallDistance = freeFallDistance/2;
    cout << "The distance of free fall is ";
    cout << freeFallDistance; 
    //Display Outputs

    //Exit stage right!
    return 0;
}
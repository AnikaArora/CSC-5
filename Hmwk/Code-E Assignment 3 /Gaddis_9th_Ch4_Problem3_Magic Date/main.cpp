/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/21/20 at 11:05PM 
 * Purpose: Magic Date 
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
    int month, day, year; 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter a month:\n";
    cin>>month; 
    cout<<"Enter a day:\n";
    cin>>day; 
    cout<<"Enter a year:\n"; 
    cin>>year; 
    
    if ((month*day) == year) 
    {
        cout<<"The date is magic"; 
    }
    else 
    {
        cout<<"The date is not magic"; 
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}
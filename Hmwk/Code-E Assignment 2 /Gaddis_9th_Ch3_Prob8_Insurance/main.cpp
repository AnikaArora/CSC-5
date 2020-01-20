/* 
 * File:   main.cpp
 * Author: Anika Arora
 * Created on January 16, 2020, 6:25 PM
 * Purpose:  Minimum amt of insurance for a building 
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
    double costOfReplacement, minInsurance, percentInsured; 
    //Initialize Variables
    percentInsured = 0.8; 
    //Process or map Inputs to Outputs
    cout<<"Insurance Calculator\n";
    cout<<"How much is your house worth?\n"; 
    cin>>costOfReplacement; 
    minInsurance = costOfReplacement*percentInsured; 
    cout<<"You need $"<<minInsurance<<" of insurance."; 
    
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
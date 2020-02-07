/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on 2/2/2020 at 11:45PM 
 * Purpose:  OverUnder7 version 1 
 */

//System Libraries
#include <iostream>
#include <stdlib.h> //rand(); 
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes 
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand (time(NULL)); 
    //Declare Variable Data Types and Constants
    int money, //amount of money the user has in their bank account 
        bet, //the bet the user would like to place 
        randNum; //random number for dice roll; 
    
    //Initialize Variables
    
    
    //Process or map Inputs to Outputs
    cout<<"How much money would you like to start with?";
    cout<<money; 
    cout<<"What outcome would you like to bet on?"; 
    cout<<"1. Over 7 (1 to 1 odds)"; 
    cout<<"2. Under 7 (1 to 1 odds)"; 
    cout<<"3. Exactly 7 (5 to 1 odds)"; 
    cin>>bet; 
   
    //Display Outputs

    //Exit stage right!
    return 0;
}

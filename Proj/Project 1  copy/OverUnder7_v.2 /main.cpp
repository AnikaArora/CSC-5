/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on 2/3/2020 at 10:05AM 
 * Purpose:  OverUnder7 version 2 
 */

//System Libraries
#include <iostream>
#include <stdlib.h> //rand(); 
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    //Declare Variable Data Types and Constants
    int money, //amount of money the user has in their bank account 
        bet; //the bet the user would like to place 
    //Initialize Variables 
    
    //Set-up game 
    cout<<"How much money would you like to start with?";
    cin<<money; 
    //check to make sure money is a positive value and is at least $1 
    if (money < 1)
    {
        cout<<"That is an invalid amount of money."; 
        cout<<"How much money would you like to start with?"; 
        cin>>money; 
    }
    //display possible outcomes for user to bet on 
    cout<<"What outcome would you like to bet on?"; 
    cout<<"1. Over 7 (1 to 1 odds)"; 
    cout<<"2. Under 7 (1 to 1 odds)"; 
    cout<<"3. Exactly 7 (5 to 1 odds)"; 
    cin>>bet; 
    
    cout<<"The two dice rolled a total of "<<//add dice roll<<"."; 
    
    //Display Outputs 
    
    //Exit stage right!
    return 0;
}
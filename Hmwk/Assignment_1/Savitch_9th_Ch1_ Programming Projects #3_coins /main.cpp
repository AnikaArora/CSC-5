/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 6, 2020, 12:23 PM
 * Purpose:  C++ Template to be copied and utilized
 * for homework, projects, exams!
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
    int numOfQuarters, numOfDimes, numOfNickels, totalValueOfCoins, valueOfQuarters, valueOfDimes, valueOfNickels; 
    
    //Process or map Inputs to Outputs 
    cout << "Press return after entering a value. \n"; 
    cout << "\nEnter a number of quarters: "; 
    cin >> numOfQuarters; 
    cout << "\nEnter a number of dimes: "; 
    cin >> numOfDimes; 
    cout << "\nEnter a number of nickels: "; 
    cin >> numOfNickels; 
    valueOfNickels = numOfNickels * 5; 
    valueOfDimes = numOfDimes * 10; 
    valueOfQuarters = numOfQuarters * 25; 
    
    //Display Outputs
    cout << "\nThe coins are worth "; 
    cout << valueOfNickels + valueOfDimes + valueOfQuarters; 
    cout << " cents.\n"; 
    //Exit stage right!
    return 0;
}
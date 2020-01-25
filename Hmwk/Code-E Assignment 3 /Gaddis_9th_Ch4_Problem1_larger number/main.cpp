/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/22/20 at 3:55PM 
 * Purpose: Determine which number is larger 
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
    int num1, num2; 
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter a number:\n"; 
    cin>>num1; 
    cout<<"Enter a number:\n"; 
    cin>>num2; 
    
    //Display Outputs
    if (num1 > num2) {
        cout<<num1<<" is larger";
    }
    else {
        cout<<num2<<" is larger"; 
    }
    
    //Exit stage right!
    return 0;
}
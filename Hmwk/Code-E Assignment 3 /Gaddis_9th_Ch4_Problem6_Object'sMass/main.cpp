/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/21/20 at 11:20PM 
 * Purpose: Object's Weight in Newtons 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    double mass, weight; 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter the mass of an object:\n"; 
    cin>>mass; 
    weight = mass*9.8; 
    //Display Outputs
    if (weight > 1000) 
    {
        cout<<"The object is too heavy"; 
    }
    else if (weight < 10) 
    {
        cout<<"The object is too light"; 
    }
    else 
    {
        cout<<fixed<<setprecision(1)<<showpoint; 
        cout<<"The object weighs "<<weight<<" newtons"; 
    }
    
    //Exit stage right!
    return 0;
}
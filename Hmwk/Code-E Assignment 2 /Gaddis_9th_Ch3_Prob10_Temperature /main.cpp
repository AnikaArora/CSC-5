/* 
 * File:   main.cpp
 * Author: Anika Arora
 * Created on January 16, 2020, 7:02 PM
 * Purpose:  Convert Celsius to Fahrenheit 
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
    
    //Declare Variable Data Types and Constants
    double tempF, tempC; 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Temperature Converter\n";
    cout<<"Input Degrees Fahrenheit\n"; 
    cin>>tempF; 
    tempC = (5.0/9.0)*(tempF-32.0);
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<tempF<<" Degrees Fahrenheit = "<<tempC<<" Degrees Centigrade"; 
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
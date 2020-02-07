/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/25/20 at 12:15AM 
 * Purpose:  Calories burned per minute 
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
    int mins; 
    double cal, calNew; 
    //Initialize Variables
    mins = 5; 
    //Process or map Inputs to Outputs
    cout<<"Enter how many calories are burned per minute:\n"; 
    cin>>cal; 
    calNew=cal*5; 
    cout<<"Min\tCalories burned\n"; 
    while (mins<=30)
    {
        cout<<fixed<<setprecision(1); 
        cout<<mins<<"\t"<<calNew<<endl; 
        mins=mins+5; 
        calNew = calNew+(cal*5); 
    }
    
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
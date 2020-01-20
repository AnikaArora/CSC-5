/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on January 16, 2020, 8:45 PM
 * Purpose: Pay raise 
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
    
    //Declare Variable Data Types and Constant 
    float payInc, //amount of pay increase 
            yrSal, //previous yearly salary
            mtSal, //previous monthly salary 
            retPay, //extra money earned in last 6 months 
            newYrS,//new yearly salary 
            newMtS;//new monthly salary 
    int months; //number of retroactive months 
    //Initialize Variables
    payInc = 0.076; 
    months = 6; 
    //Process or map Inputs to Outputs
    cout<<"Input previous annual salary.\n"; 
    cin>>yrSal; 
    mtSal = yrSal/12.00;
    cout<<fixed<<setprecision(2)<<showpoint;
    retPay = mtSal*6.00*0.076;
    cout<<fixed<<setprecision(2)<<showpoint;
    newYrS = yrSal + (payInc*yrSal); 
    cout<<fixed<<setprecision(2)<<showpoint;
    newMtS = mtSal + (payInc*mtSal);
    
    //Display Outputs
    cout<<"Retroactive pay    = $"<<setw(7)<<retPay<<"\n"; 
    cout<<"New annual salary  = $"<<setw(7)<<newYrS<<"\n"; 
    cout<<"New monthly salary = $"<<setw(7)<<newMtS;
    
    //Exit stage right!
    return 0;
}
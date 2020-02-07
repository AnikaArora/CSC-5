/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/30/20 at 10:37PM 
 * Purpose:  Calculate the retail price of an item 
 */

//System Libraries
#include <iostream>
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
double calculateRetail(double wholesaleCost, int markupPercentage); 

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    double cost, percentage, retailCost; 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter the wholesale cost:\n"; 
    cin>>cost; 
    cout<<"Enter the markup percentage:\n"; 
    cin>>percentage; 
    
    retailCost = calculateRetail(cost, percentage); 
    
    cout<<"The retail price is $"<<fixed<<setprecision(2)<<retailCost; 
    //Display Outputs

    //Exit stage right!
    return 0;
}

double calculateRetail(double wholesaleCost, int markupPercentage)
{
    double newCost; 
    newCost = wholesaleCost + (wholesaleCost*(markupPercentage/100.0)); 
    return newCost; 
}
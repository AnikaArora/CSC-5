/* 
 * File:   main.cpp
 * Author: Anika Arora
 * Created on January 7, 2020, 8:00PM
 * Purpose:  Military and NASA Budget 
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
    //Declare Variable Data Types and Constants
    const int CONVPER=100; //Percentage Conversion 
    float fedBudg,milBudg;//Budgets in Dollars 2020 
    
    //Initialize Variables
    fedBudg=4.1e12f; //Federal budget given: $4.1 trillion 
    milBudg=7.0e11f; //Military budget given: $700 billion 
    
    //Process or map Inputs to Outputs
    cout<<"Federal Budget  = $"<<fedBudg<<endl;//prints federal budget 
    cout<<"Military Budget = $"<<milBudg<<endl;//prints military budget 
    cout<<"Military Budget =  "<<milBudg/fedBudg*CONVPER<<"%"<<endl;//calculates and prints military budget as a percentage of federal budget 
   
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
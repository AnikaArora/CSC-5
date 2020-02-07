/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/24/2020 at 11:01PM 
 * Purpose:  Sum of integers 
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
    int finNum, num, sum; 
    
    //Initialize Variables
    num = 0; 
    sum = 0; 
    //Process or map Inputs to Outputs
    cout<<"Enter a positive integer value:\n"; 
    cin>>finNum; 
    if (finNum < 0)
    {
        cout<<"Invalid input, reenter value: \n"; 
        cin>>finNum; 
    }
    while (num <= finNum)
    {
        sum+=num; 
        num=num+1; 
    }
    cout<<"The sum of all the integers from 1 to "<<finNum<<" is "<<sum; 
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
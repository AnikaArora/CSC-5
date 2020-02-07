/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/24/20 at 11:08PM 
 * Purpose:  Display table for rising ocean levels 
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
    double mmPerYr; 
    int yrs, num; 
    //Initialize Variables
    yrs = 1; 
    num = 1; 
    //Process or map Inputs to Outputs
    cout<<"Enter how many millimeters the ocean is rising per year:\n"; 
    cin>>mmPerYr; 
    cout<<"Year\tRise(mm)\n"; 
    while (yrs <= 30) 
    {
        cout<<fixed<<setprecision(1); 
        cout<<yrs<<"\t"<<mmPerYr*num<<endl; 
        yrs=yrs+1; 
        num=num+1; 
    }
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
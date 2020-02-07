/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/25/20 at 11:50PM 
 * Purpose:  Distance every hour 
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
    int dist, totHrs, hr, totDist; 
    double speed; 
    //Initialize Variables
    hr = 1; 
    //Process or map Inputs to Outputs
    cout<<"What is the speed of the vehicle in mph?\n"; 
    cin>>speed; 
    cout<<"How many hours has it traveled?\n"; 
    cin>>totHrs; 
    totDist = speed*totHrs; 
    dist = speed; 
    
    cout<<"Hour   Distance Traveled\n"; 
    
    while (hr<=totHrs)
    {
        cout<<hr<<"            "<<setw(3)<<dist<<endl; 
        dist=dist+speed; 
        hr++; 
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/26/20 at 12:20AM 
 * Purpose:  Occupance Rate of a Hotel 
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
    //Declare Variable Data Types and Constants
    int floors, floorNum, rmsPerFl, roomsOcc; 
    double totOcc, totRms, percOcc; 
    //Initialize Variables
    floorNum = 1; 
    totRms = 0; 
    totOcc = 0; 
    //Process or map Inputs to Outputs
    cout<<"Enter how many floors there are:\n"; 
    cin>>floors; 
    
    while (floorNum<=floors) 
    {
        cout<<"Enter how many rooms are on floor "<<floorNum<<":\n"; 
        cin>>rmsPerFl; 
        cout<<"Enter how many are occupied:\n"; 
        cin>>roomsOcc; 
        totOcc=totOcc+roomsOcc; 
        totRms=totRms+rmsPerFl; 
        floorNum++; 
    }
    cout<<"There are "<<totOcc<<" rooms occupied.\n"; 
    cout<<"There are "<<(totRms-totOcc)<<" rooms unoccupied.\n"; 
    percOcc = (totOcc/totRms)*100; 
    cout<<fixed<<setprecision(1); 
    cout<<percOcc<<"% of rooms are occupied."; 
    //Display Outputs

    //Exit stage right!
    return 0;
}
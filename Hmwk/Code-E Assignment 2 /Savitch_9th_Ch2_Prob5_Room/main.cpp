/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on January 16, 2020, 9:23 PM
 * Purpose:  Determine whether a meeting room is in violation of fire law regulations in terms of room capacity. 
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
    int roomCap, //capacity of the room. 
            numPpl, //number of people in the meeting. 
            canAdd, //number of people that can enter the meeting if maximum capacity of the room is not filled. 
            mustGo; //number of people that must leave if the number of people at the meeting is greater than the maximum room capacity. 

    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Input the maximum room capacity and the number of people\n"; 
    cin>>roomCap>>numPpl; 
    
    
    //Display Outputs
    if (roomCap > numPpl) {
        cout<<"Meeting can be held.\n"; 
        cout<<"Increase number of people by "<<roomCap-numPpl<<" will be allowed without violation.";
    } else {
        cout<<"Meeting cannot be held.\n"; 
        cout<<"Reduce number of people by "<<numPpl-roomCap<<" to avoid fire violation."; 
    }
    //Exit stage right!
    return 0;
}
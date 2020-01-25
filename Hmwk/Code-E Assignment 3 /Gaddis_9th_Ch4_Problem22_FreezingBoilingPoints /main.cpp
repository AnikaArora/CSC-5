/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/22/20 at 8:28PM 
 * Purpose: Freezing and Boiling Points 
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
    float userTemp, ethFP, ethBP, mercFP, mercBP, oxyFP, oxyBP, waterFP, waterBP; 
    //Initialize Variables
    ethFP = -173; 
    ethBP = 172; 
    mercFP = -38; 
    mercBP = 676; 
    oxyFP = -362; 
    oxyBP = -306; 
    waterFP = 32; 
    waterBP = 212; 
    //Process or map Inputs to Outputs
    cout<<"Enter a temperature:\n"; 
    cin>>userTemp; 
    
    if (userTemp <= ethFP) 
    {
        cout<<"Ethyl alcohol will freeze\n"; 
    }
    if (userTemp <= mercFP) 
    {
        cout<<"Mercury will freeze\n"; 
    }
    if (userTemp <= oxyFP) 
    {
        cout<<"Oxygen will freeze\n"; 
    }
    if (userTemp <= waterFP) 
    {
        cout<<"Water will freeze\n"; 
    }
    if (userTemp >= ethBP) 
    {
        cout<<"Ethyl alcohol will boil\n"; 
    }
    if (userTemp >= mercBP) 
    {
        cout<<"Mercury will boil\n"; 
    }
    if (userTemp >= oxyBP) 
    {
        cout<<"Oxygen will boil\n"; 
    }
    if (userTemp >= waterBP) 
    {
        cout<<"Water will boil\n"; 
    }
    
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
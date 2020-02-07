/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/30/20 at 11:34PM 
 * Purpose:  Kinetic Energy 
 */

//System Libraries
#include <iostream>
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
double kineticEnergy(double mass, double velocity); 

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    double mass, velocity; 
    double kinEnergy; 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter the object's mass:\n"; 
    cin>>mass; 
    cout<<"Enter the object's velocity:\n"; 
    cin>>velocity; 
    
    kinEnergy = kineticEnergy(mass, velocity); 
    cout<<"The object has "<<fixed<<setprecision(1)<<kinEnergy<<" Joules of energy."; 
    //Display Outputs

    //Exit stage right!
    return 0;
}

double kineticEnergy(double mass, double velocity)
{
    double kineticEnergy; 
    
    kineticEnergy = 0.5*mass*velocity*velocity; 
    
    return kineticEnergy; 
}
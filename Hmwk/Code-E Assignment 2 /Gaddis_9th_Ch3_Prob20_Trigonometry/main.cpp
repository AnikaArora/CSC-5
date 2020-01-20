/* 
 * File:   main.cpp
 * Author: Anika Arora
 * Created on January 16, 2020, 7:02 PM
 * Purpose:  Find the sin, cos, and tangent of an angle. 
 */

//System Libraries
#define _USE_MATH_DEFINES 
#include <iostream>
#include <math.h> 
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
    double sin1, cos1, tan1, cnv; 
    int angle; 
    //Initialize Variables
    cnv = M_PI/180; 
    //Process or map Inputs to Outputs
    cout<<"Calculate trig functions\n";
    cout<<"Input the angle in degrees.\n"; 
    cin>>angle; 
    cout<<fixed<<setprecision(0)<<showpoint;
    sin1=sin(angle*cnv);
    cos1=cos(angle*cnv);
    tan1=tan(angle*cnv);
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angle<<") = "<<sin1<<"\n"; 
    cout<<"cos("<<angle<<") = "<<cos1<<"\n";
          cout<<"tan("<<angle<<") = "<<tan1;
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
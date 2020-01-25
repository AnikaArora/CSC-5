/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/21/20 at 11:12PM 
 * Purpose: Area of a Rectangle 
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
    int width1, height1, width2, height2; 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter the width of rectangle 1:\n"; 
    cin>>width1; 
    cout<<"Enter the height of rectangle 1:\n"; 
    cin>>height1; 
    cout<<"Enter the width of rectangle 2:\n"; 
    cin>>width2; 
    cout<<"Enter the height of rectangle 2:\n"; 
    cin>>height2; 
    //Display Outputs
    if ((width1*height1)==(width2*height2))
    {
        cout<<"The rectangles have the same area"; 
    }
    else if ((width1*height1) > (width2*height2))
    {
        cout<<"Rectangle 1 has the greater area"; 
    }
    else 
    {
        cout<<"Rectangle 2 has the greater area"; 
    }
    //Exit stage right!
    return 0;
}
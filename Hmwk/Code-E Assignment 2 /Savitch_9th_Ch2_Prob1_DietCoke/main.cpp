/* 
 * File:   main.cpp
 * Author: Anika Arora
 * Created on January 16, 2020, 8:17 PM
 * Purpose:  Calculate the maximum amount of diet soda pop it is possible to drink without dying. 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVGRMS=453.592;//Grams/lb

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float desWtLb, //Dieter's weight in lbs
          gMouse,//Mass of the mouse in grams
          gDeath, //Mass of the artifical sweetener that results in Death 
          gCan, //Mass of liquid in soda can
          conc,//Concentration of artificial sweetener in soda can
          desWtg;//Dieter's weight in grams 
    int numCans;//Maximum number of cans the dieter can drink. 
    
    //Initialize Variables
    desWtLb=200;//200 lbs 
    gMouse=35;//35 grams
    gDeath=5;//5 grams
    gCan=350;//350 grams
    conc=1e-3f;//.001 Concentration
    
    //Process or map Inputs to Outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption.\n";
    cout<<"Input the desired dieters weight in lbs.\n"; 
    cin>>desWtLb; 
    desWtg = desWtLb*CNVGRMS; 
    numCans=(desWtg*gDeath)/(gMouse*gCan*conc);
    
    //Display Outputs
    cout<<"The maximum number of soda pop cans\nwhich can be consumed is "<<numCans<<" cans"; 
    

    //Exit stage right!
    return 0;
}
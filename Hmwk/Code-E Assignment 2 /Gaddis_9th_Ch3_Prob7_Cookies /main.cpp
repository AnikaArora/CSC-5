/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on January 16, 2020, 5:50 PM
 * Purpose:  Calories consumed from cookies 
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
    double cookies, cookiesPerServing, caloriesPerServing, cookiesConsumed, caloriesConsumed; 
    //Initialize Variables
    cookies=40; 
    cookiesPerServing=4; 
    caloriesPerServing=300; 
    cookiesConsumed=0; 
    caloriesConsumed=0; 
    //Process or map Inputs to Outputs
    cout<<"Calorie Counter\n"; 
    cout<<"How many cookies did you eat?"<<endl; 
    cin>>cookiesConsumed; 
    caloriesConsumed = (cookiesConsumed/cookiesPerServing)*caloriesPerServing; 
    //Display Outputs
    cout<<"You consumed "<<caloriesConsumed<<" calories."; 
   
    
    
    //Exit stage right!
    return 0;
}
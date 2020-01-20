/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on January 6, 2020, 9:38 PM
 * Purpose:  Find various sums of ten numbers 
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
    int negSum, //sum of all numbers less than zero. 
            posSum, //sum of all numbers greater than zero. 
            totSum, //sum of all numbers. 
            num1, 
            num2, 
            num3, 
            num4, 
            num5, 
            num6, 
            num7, 
            num8, 
            num9, 
            num10; 
    //Initialize Variables
    posSum = 0; 
    negSum = 0; 
    totSum = 0; 
    //Process or map Inputs to Outputs
    cout<<"Input 10 numbers, any order, positive or negative\n"; 
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10; 
    if (num1 > 0){
        posSum+=num1;
    } else if (num1 < 0) {
        negSum+=num1; 
    }
    
    if (num2 > 0){
        posSum+=num2;
    } else if (num2 < 0) {
        negSum+=num2; 
    }
        
    if (num3 > 0){
        posSum+=num3;
    } else if (num3 < 0) {
        negSum+=num3; 
    }
    
    if (num4 > 0){
        posSum+=num4;
    } else if (num4 < 0) {
        negSum+=num4; 
    }
    
    if (num5 > 0){
        posSum+=num5;
    } else if (num5 < 0) {
        negSum+=num5; 
    }
    
    if (num6 > 0){
        posSum+=num6; 
    } else if (num6 < 0) {
        negSum+=num6; 
    }
    
    if (num7 > 0){
        posSum+=num7; 
    } else if (num7 < 0) {
        negSum+=num7; 
    }
    
    if (num8 > 0){
        posSum+=num8; 
    } else if (num8 < 0) {
        negSum+=num8; 
    }
    
    if (num9 > 0){
        posSum+=num9; 
    } else if (num9 < 0) {
        negSum+=num9; 
    } 
    
    if (num10 > 0){
        posSum+=num10;
    } else if (num10 < 0) {
        negSum+=num10;
    } 
    
    totSum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10; 
    
    //Display Outputs 
    cout<<"Negative sum = "<<setw(3)<<negSum<<endl; 
    cout<<"Positive sum = "<<setw(3)<<posSum<<endl; 
    cout<<"Total sum    = "<<setw(3)<<totSum; 
    //Exit stage right!
    return 0;
}
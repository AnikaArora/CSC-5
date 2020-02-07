/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/31/20 at 12:43AM 
 * Purpose:  Calculate the average of a group of test scores 
 */

//System Libraries
#include <iostream>
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void getScore(int& num1, int& num2, int& num3, int& num4, int& num5); 
void calcAverage (int num1, int num2, int num3, int num4, int num5); 
int findLowest(int num1, int num2, int num3, int num4, int num5); 

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    int num1, num2, num3, num4, num5; 

    //Process or map Inputs to Outputs
    getScore(num1, num2, num3, num4, num5); 
    calcAverage(num1, num2, num3, num4, num5); 

    //Exit stage right!
    return 0;
}

void getScore(int& num1, int& num2, int& num3, int& num4, int& num5) 
{
    cout<<"Enter a test score:"<<endl; 
    cin>>num1; 
    cout<<"Enter a test score:"<<endl; 
    cin>>num2; 
    cout<<"Enter a test score:"<<endl; 
    cin>>num3; 
    cout<<"Enter a test score:"<<endl; 
    cin>>num4;
    cout<<"Enter a test score:"<<endl; 
    cin>>num5; 
}


void calcAverage(int num1, int num2, int num3, int num4, int num5) 
{
    int lowest = findLowest(num1, num2, num3, num4, num5); 
    double average; 
    average = (num1 + num2 + num3 + num4 + num5 - lowest)/4.0; 
    cout<<"The average is "<<fixed<<setprecision(1)<<fixed<<average; 
}

int findLowest(int num1, int num2, int num3, int num4, int num5) 
{
    int lowest = num1; 
    if (num2 <= lowest) 
    {
        lowest = num2; 
    }
    if (num3 <= lowest) 
    {
        lowest = num3; 
    }
    if (num4 <= lowest) 
    {
        lowest = num4; 
    }
    if (num5 <= lowest) 
    {
        lowest = num5; 
    }
    return lowest; 
}
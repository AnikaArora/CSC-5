/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/31/20 at 1:09AM 
 * Purpose:  Prime numbers 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
bool isPrime(int); 
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int num; 
    bool prime; 
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout<<"Enter a number:\n"; 
    cin>>num; 
    prime = isPrime(num); 
    //Display Outputs

    //Exit stage right!
    return 0;
}

bool isPrime(int num) 
{
    bool isPrime = true; 
    int i = 2; 
    while (i < num/2.0)
    {
        if (num%i == 0)
        {
            isPrime = false; 
            cout<<num<<" is not a prime number."; 
            break; 
        }
        i++; 
    }
    cout<<num<<" is a prime number."; 
    return isPrime; 
}
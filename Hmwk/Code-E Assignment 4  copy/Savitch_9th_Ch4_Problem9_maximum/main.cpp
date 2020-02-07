/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/26/20 at 1:09AM 
 * Purpose:  Maximum of two or three parameters 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    double num1, num2, num3, bigNum2, bigNum3; 
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Enter first number:\n"<<endl; 
    cin>>num1; 
    cout<<"Enter Second number:\n"<<endl; 
    cin>>num2; 
    cout<<"Enter third number:\n"<<endl; 
    cin>>num3; 
    
    if (num1 > num2)
    {
        bigNum2 = num1; 
    }
    else 
    {
        bigNum2 = num2; 
    }
    
    if (num1 > num2 && num1 > num3)
    {
        bigNum3 = num1; 
    }
    else if (num2 > num1 && num2 > num3)
    {
        bigNum3 = num2; 
    }
    else if (num3 > num1 && num3 > num2)
    {
        bigNum3 = num3; 
    }
    
    
    cout<<"Largest number from two parameter function:\n"; 
    cout<<bigNum2<<endl; 
    cout<<"\nLargest number from three parameter function:\n"; 
    cout<<bigNum3<<endl; 
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
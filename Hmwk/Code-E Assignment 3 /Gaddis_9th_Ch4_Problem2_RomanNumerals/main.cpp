/* 
 * File: main.cpp 
 * Author: Anika Arora 
 * Created on 1/20/20 at 4:02PM 
 * Purpose: Use a switch statement to display a number in roman numberals 
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
    int num, num2; 
    
    //Initialize Variables
    num2=1; 
    //Process or map Inputs to Outputs
    cout<<"Enter a number between 1 and 10:\n";
    do { 
        cin>>num;
            switch (num)
            { 
                case 1 : 
                    cout<<num<<" is I in Roman numerals"; 
                    num2 = 1; 
                    break;
                case 2 : 
                    cout<<num<<" is II in Roman numerals"; 
                    num2 = 1;
                    break; 
                case 3 : 
                    cout<<num<<" is III in Roman numerals"; 
                    num2 = 1;
                    break; 
                case 4 : 
                    cout<<num<<" is IV in Roman numerals";
                    num2 = 1;
                    break; 
                case 5 : 
                    cout<<num<<" is V in Roman numerals"; 
                    num2 = 1;
                    break; 
                case 6 : 
                    cout<<num<<" is VI in Roman numerals"; 
                    num2 = 1;
                    break; 
                case 7 : 
                    cout<<num<<" is VII in Roman numerals"; 
                    num2 = 1;
                    break; 
                case 8 : 
                    cout<<num<<" is VIII in Roman numerals"; 
                    num2 = 1;
                    break; 
                case 9 : 
                    cout<<num<<" is IX in Roman numerals"; 
                    num2 = 1;
                    break; 
                case 10 : 
                    cout<<num<<" is X in Roman numerals"; 
                    num2 = 1;
                    break; 
                default :
                    cout<<"Entered number is not valid, reenter number:\n";
                    num2 = 2;
                    
            }  
    } while (num2 != 1);
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
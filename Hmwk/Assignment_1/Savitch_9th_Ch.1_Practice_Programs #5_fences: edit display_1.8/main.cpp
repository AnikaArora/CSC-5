/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on January 12, 2020, 1:28 PM
 * Purpose:  Savitch; 9th Edition; Ch.1/Practice Programs/Q.2; add greetings to display 1.8 
 */

//System Libraries
#include <iostream>
using namespace std;

//Execution Begins Here
int main( ) 
{
    //Declare Variable Data Types and Constants
    int width, height, totalLength; //declare variables 
    
    //Process or map Inputs to Outputs
    cout << "Hello\n"; //greeting added to display 1.8 
    cout << "Press return after entering a number. \n"; 
    cout << "Enter the width of the rectangle: \n"; 
    
    cin >> width; //user inputs the width of the rectangle  
    
    cout<< "Enter the height of the rectangle: \n"; 
    cin >> height; //user inputs the height of the rectangle 
    totalLength = width * height; //calculate the length of fence needed 
    
    //Display Outputs
    cout << "If you have a width of "; 
    cout << width; 
    cout << " and height of "; 
    cout << height;
    cout << ", the total length of fence needed is "; 
    cout << totalLength; 
    cout << "\nGood-bye\n"; //added to display 1.8 
    //Exit stage right!
    return 0;
}
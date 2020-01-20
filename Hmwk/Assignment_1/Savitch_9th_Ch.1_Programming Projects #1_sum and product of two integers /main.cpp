/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on January 12, 2020, 1:28 PM
 * Purpose:  Savitch; 9th Edition; Ch.1/Programming Projects/Q.1; sum and product of two integers 
 */

//System Libraries
#include <iostream>
using namespace std;

//Execution Begins Here
int main( ) 
{
    //Declare Variable Data Types and Constants
    int num1, num2, sum, product; //declare variables 
    
    //Process or map Inputs to Outputs
    cout << "Hello\n"; //greeting added to display 1.8 
    cout << "Press return after entering a number. \n"; 
    cout << "Enter a number: \n"; 
    cin >> num1; //user inputs num1  
    cout<< "Enter another number: \n"; 
    cin >> num2; //user inputs num2 
    sum = num1 + num2; //calculate the sum of num1 and num2 
    product = num1 * num2; //calculate the product of num1 and num2 
    
    //Display Outputs
    cout << "If you have two numbers: "; 
    cout << num1; 
    cout << " and "; 
    cout << num2; 
    cout << ", the sum is "; 
    cout << sum; 
    cout << " and the product is "; 
    cout << product; 
    cout << "\nGood-bye\n"; //added to display 1.8 
    
    //Exit stage right!
    return 0;
}
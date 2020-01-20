/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on January 12, 2020, 1:28 PM
 * Purpose:  Savitch; 9th Edition; Ch.1/Practice Programs/Q.3; division by zero in display 1.8 
 */

//System Libraries
#include <iostream>
using namespace std;

//Execution Begins Here
int main( ) 
{
    //Declare Variable Data Types and Constants
    int number_of_pods, peas_per_pod, total_peas; //declare variables 
    
    //Process or map Inputs to Outputs
    cout << "Hello\n"; 
    cout << "Press return after entering a number. \n"; 
    cout << "Enter the number of pods: \n"; 
    
    cin >> number_of_pods; //user inputs the number of pods 
    
    cout<< "Enter the number of peas in a pod: \n"; 
    cin >> peas_per_pod; //user inputs the number of peas per pod 
    total_peas = number_of_pods / peas_per_pod; //testing result of dividing instead of multiplying 
    
    //Display Outputs
    cout << "If you have "; 
    cout << number_of_pods; 
    cout << " pea pods\n"; 
    cout << "and "; 
    cout << peas_per_pod; 
    cout << " peas in each pod, then \n"; 
    cout << "you have "; 
    cout << total_peas; 
    cout << " peas in all the pods. \n"; 
    cout << "Good-bye\n"; 
    
    //Exit stage right!
    return 0;
}
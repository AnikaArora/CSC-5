/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on January 12, 2020, 9:17 PM
 * Purpose:  Create a large block letter "C" composed of a new character inputted by the user. 
 */

//System Libraries
#include <iostream>
using namespace std; 

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants 
    char C; 
    
    //Initialize Variables 
    cout << "The Big C program\n"; 
    cout << "What letter do you choose to composer the Big C? "; 
    cin >> C; 
    
    //Display Outputs
    cout << "  "<<C<<C<<C<<endl; 
    cout << " "<<C<<"  "<<C<<endl; 
    cout <<C<<endl; 
    cout <<C<<endl; 
    cout <<C<<endl; 
    cout <<C<<endl; 
    cout <<C<<endl; 
    cout << " "<<C<<"  "<<C<<endl; 
    cout <<"  "<<C<<C<<C<<endl;
            
    //Exit stage right!
    return 0;
}
/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/26/20 at 6:07PM 
 * Purpose:  Vending Machine 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int total, coin; 
    double cost, change; 
    //Initialize or input i.e. set variable values
    total = 0; 
    
    //Map inputs -> outputs
    while (total <= 350)
    {
    cout<<"List of coins:\n"; 
    cout<<"1. Nickel\n2. Dime\n3. Quarter\n4. Dollar\n"; 
    cout<<"Enter number for coin:\n"<<endl; 
    cin>>coin; 
        if (coin == 1)
        {
            total+=5; 
        }
        else if (coin == 2)
        {
            total +=10; 
        }
        else if (coin == 3)
        {
            total+=25; 
        }
        else if (coin == 4)
        {
            total +=100; 
        }
        cout<<fixed<<setprecision(2); 
        cout<<"Current amount: $"<<total/100.0<<endl; 
    }
    cost = 350; 
    if (total > cost) 
    {
        change = (total-cost)/100.0; 
        cout<<"Enjoy your deep-fried twinkie\n"; 
        cout<<"Change to be returned: $"<<change<<endl; 
    }
    else 
    {
        cout<<"Enjoy your deep-fried twinkie\n"; 
    }
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
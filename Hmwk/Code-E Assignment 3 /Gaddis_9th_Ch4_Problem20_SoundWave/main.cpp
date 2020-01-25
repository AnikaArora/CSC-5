/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/22/20 at 7:36PM 
 * Purpose: Sound Wave Through A Medium 
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
    char material; 
    double air, water, steel, distance, time; 
    
    //Initialize Variables
    air = 1100; 
    water = 4900; 
    steel = 16400; 
    //Process or map Inputs to Outputs
   
        cout<<"Choose which medium the sound wave will travel in.\n"; 
        cout<<"1.Air\n"; 
        cout<<"2.Water\n"; 
        cout<<"3.Steel\n"; 
        cin>>material; 
        cout<<"Enter the distance the wave will travel:\n"; 
        cin>>distance; 
        
        if (distance <= 0) 
        {
            cout<<"You can't have a distance less than zero\n"; 
        }
        else 
        {
            switch (material)
            {
                case '1':
                    time = (1/air)*distance; 
                    break; 
                case '2':
                    time = (1/water)*distance; 
                    break; 
                case '3':
                    time = (1/steel)*distance; 
                    break; 
                default: 
                    cout<<"Not a valid choice.\n"; 
                    break; 
            }
        }
    
        cout<<fixed; 
        cout<<"The wave will take "<<setprecision(4)<<time<<" seconds"; 
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
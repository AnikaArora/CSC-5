/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/22/20 at 9:38PM 
 * Purpose: Geometry Calcilator 
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
    int choice; 
    float r, pi, recH, recL, triB, triH; 
    //Initialize Variables
    pi = 3.14159; 
    //Process or map Inputs to Outputs
    cout<<"Geometry Calculator\n"; 
    cout<<"1. Calculate the Area of a Circle\n"; 
    cout<<"2. Calculate the Area of a Rectangle\n"; 
    cout<<"3. Calculate the Area of a Triangle\n"; 
    cout<<"4. Quit\n"; 
    cin>>choice; 
    
    if (choice < 1 || choice > 4)
    {
        cout<<"Invalid entry, Reenter:\n"; 
        cin>>choice; 
    }
    else if (choice == 1) 
    {
        cout<<"Enter the radius of the circle:\n"; 
        cin>>r; 
        if (r<0) 
        {
            cout<<"Invalid entry, Reenter:\n"; 
            cin>>r; 
        }
        else{ 
        }
        cout<<fixed<<setprecision(1); 
        cout<<"The area of the circle is "<<(pi*r*r); 
    }
    else if (choice == 2) 
    {
        cout<<"Enter the length of the rectangle:\n"; 
        cin>>recL; 
        if (recL<0) 
        {
            cout<<"Invalid entry, Reenter:\n"; 
            cin>>recL; 
        }
        cout<<"Enter the height of the rectangle:\n"; 
        cin>>recH; 
        if (recH<0) 
        {
            cout<<"Invalid entry, Reenter:\n"; 
            cin>>recH; 
        }
        else {        
        }
        cout<<"The area of the rectangle is "<<(recL*recH); 
    }
    else if (choice == 3) 
    {
        cout<<"Enter the base of the triangle:\n"; 
        cin>>triB; 
        if (triB<0) 
        {
            cout<<"Invalid entry, Reenter:\n"; 
            cin>>triB; 
        }
        cout<<"Enter the height of the triangle:\n"; 
        cin>>triH; 
        if (triH<0) 
        {
            cout<<"Invalid entry, Reenter:\n"; 
            cin>>triH;  
        }
        else {
        }
        cout<<fixed<<setprecision(1); 
        cout<<"The area of the triangle is "<<(triB*triH*0.5); 
    }
    
    
    
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
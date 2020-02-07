/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/30/20 at 10:48PM 
 * Purpose:  Greatest sales for a quarter 
 */

//System Libraries
#include <iostream>
#include <iomanip> 
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

float getSales(string); 
void findHighest(double, double, double, double); 

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants 
    double NESales, SESales, NWSales, SWSales; 
    
    
    //Initialize Variables
   
    //Process or map Inputs to Outputs
    
    //Display Outputs
    
    NESales = getSales("Northeast"); 
    SESales = getSales("Southeast"); 
    NWSales = getSales("Northwest"); 
    SWSales = getSales("Southwest"); 
    
    findHighest(NESales, SESales, NWSales, SWSales); 
    
    //Exit stage right!
    return 0;
}

float getSales(string nameOfDiv) 
{
    double quartSales, highestSales; 
    cout<<"Enter the sales for "<<nameOfDiv<<" division:$\n";
    cin>>quartSales; 
    return quartSales; 
}


void findHighest (double num1, double num2, double num3, double num4)
{
    double largest = 0; 
    string name; 
    if (num1 > largest) 
    {
        largest = num1; 
    }
    if (num2 > largest)
    {
        largest = num2; 
    }
    if (num3 > largest) 
    {
        largest = num3; 
    }
    if (num4 > largest) 
    {
        num4 = largest; 
    }
    if (largest == num1)
    {
        name = "Northeast"; 
    }
    else if (largest == num2)
    {
        name = "Southeast"; 
    }
    else if (largest == num3) 
    {
        name = "Northwest"; 
    }
    else 
    {
        name = "Southwest"; 
    }
    cout<<"The "<<name<<" division had the highest sales of $"<<fixed<<setprecision(2)<<largest; 
}
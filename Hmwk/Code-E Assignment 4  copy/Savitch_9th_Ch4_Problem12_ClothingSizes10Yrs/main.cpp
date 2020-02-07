/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/26/20 at 5:32PM 
 * Purpose:  Calculate the user's jacket and waist size after 10 years. 
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
    double wtLbs, //weight in lbs 
        htIn; //height in inches 
        
        
    int age; 
        
    char runAgain; 
    
    double hatSz, jacketSz, waistSz, jacketSz10, waistSz10; 
    
    //Initialize or input i.e. set variable value 
    runAgain = 'y'; 
   
    while (runAgain == 'y' || runAgain == 'Y')
    {
        cout<<"Enter height(inches):\n"<<endl; 
        cin>>htIn; 
        cout<<"Enter Weight(pounds):\n"<<endl; 
        cin>>wtLbs; 
        cout<<"Enter age:\n"<<endl; 
        cin>>age; 
    
        //hat size calculations 
        hatSz = (wtLbs/htIn)*2.9; 
        cout<<fixed<<setprecision(1); 
        cout<<"Hat size = "<<hatSz<<endl; 
    
    
        //jacket size calculations 
        if (age > 39 && age%10 == 0) {
            jacketSz = (htIn*wtLbs)/288 + 1/8; 
        }
        else {
            jacketSz = (htIn*wtLbs)/288; 
        }
        age+=10; 
        if (age > 39 && age%10 == 0) {
            jacketSz10 = (htIn*wtLbs)/288 + 1/8; 
        }
        else {
            jacketSz10 = (htIn*wtLbs)/288; 
        }
        
        cout<<fixed<<setprecision(1); 
        cout<<"Jacket size = "<<jacketSz<<endl; 
        cout<<"Jacket size in 10 years = "<<jacketSz10<<endl; 
    
    
        //waist size calculations 
        age-=10; 
        if (age > 28 && age%2 == 0) {
            waistSz = (wtLbs/5.7) + 1/10; 
        }
        else {
            waistSz = (wtLbs/5.7); 
        }
        age+=10; 
        
        if (age> 28 && age%2 == 0){
            waistSz10 = (wtLbs/5.7) + 1/10; 
        }
        else {
            waistSz10 = (wtLbs/5.7); 
        }
        cout<<fixed<<setprecision(1); 
        cout<<"Waist size = "<<waistSz<<endl; 
        cout<<"Waist size in 10 years = "<<waistSz10<<endl<<endl; 
    
        cout<<"Run again:\n"; 
        cin>>runAgain; 
        
    }
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
/* 
 * File:   main.cpp 
 * Author: Anika Arora 
 * Created on 1/26/20 at 4:50PM 
 * Purpose:  Clothing sizes 
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
        
    char C; 
    
    int age; 
    
    double hatSz, jacketSz, waistSz; 
    
    //Initialize or input i.e. set variable value 
    C = 'y'; 
   
    while (C == 'y' || C == 'Y')
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
        if (age > 39 && age%10 == 0)
        {
            jacketSz = (htIn*wtLbs)/288 + 1/8; 
        }
        else 
        {
            jacketSz = (htIn*wtLbs)/288; 
        }
        cout<<fixed<<setprecision(1); 
        cout<<"Jacket size = "<<jacketSz<<endl; 
    
        //waist size calculations 
        if (age > 28)
        {
            int age2 = age; 
            while (age2<=age) 
            {
                if (age%2 == 0)
                {
                    waistSz = (wtLbs/5.7) +1/10; 
                    age++; 
                }
                
            }
        }
        else 
        {
            waistSz = (wtLbs/5.7); 
        }
        cout<<fixed<<setprecision(1); 
        cout<<"Waist size = "<<waistSz<<endl<<endl; 

        cout<<"Run again:"<<endl;//Run again output
        cin>>C;//Run again input
    
        if (C == 'y') //If statement to loop program if user inputs y
        {
        cout<<endl;
        }
    }
        
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
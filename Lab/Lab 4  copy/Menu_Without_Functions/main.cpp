/* 
 * File:   main.cpp
 * Author: Anika Arora
 * Created on January 25, 2020, 2:00PM 
 * Purpose:  Menu
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
    //Declare Variable Data Types and Constants
    unsigned char nProbs;//Number of problems in menu < 10
    unsigned char choose;//User's choice
    
    //Initialize values
    nProbs='3';
    
    //Loop on menu and problems
    do{
        //Display the menu
        cout<<"Choose the Problem Solution to Display"<<endl;
        cout<<"01. Problem solution for Larger Number"<<endl;
        cout<<"2. Problem solution for Roman Numeral"<<endl;
        cout<<"3. Problem solution for Magic Date"<<endl; 
        cout<<"4. Problem solution for Larger Rectangle"<<endl; 
        cout<<"5. Problem solution for Weight in Newtons"<<endl; 
        cout<<"6. Problem solution for Book Club Points"<<endl; 
        cout<<"7. Problem solution for Speed of Sound"<<endl; 
        cout<<"8. Problem solution for Freezing and Boiling Points"<<endl; 
        cout<<"9. Problem solution for Geometry Calculator"<<endl; 
        cout<<"10. Problem solution for Long-Distance Charges"<<endl<<endl;
        cin>>choose;
        
        //Dependent upon the choice
        switch(choose){
            case '01':{
                //Declare Variable Data Types and Constants
                    int num1, num2; 
                //Process or map Inputs to Outputs
                    cout<<"Enter a number:\n"; 
                    cin>>num1; 
                    cout<<"Enter a number:\n"; 
                    cin>>num2; 
                //Display Outputs
                    if (num1 > num2) {
                     cout<<num1<<" is larger";
                    }
                    else {
                        cout<<num2<<" is larger"; 
                    }
                    cout<<endl<<endl; 
                break;
            }
            case '2':{
             //Declare Variable Data Types and Constants
             int num, num2; 
             //Initialize Variables
             num2=1; 
             //Process or map Inputs to Outputs
             cout<<"Enter a number between 1 and 10:\n";
             do { 
                 cin>>num;
                     switch (num)
                     { 
                         case 1 : 
                             cout<<num<<" is I in Roman numerals"; 
                             num2 = 1; 
                             break;
                         case 2 : 
                             cout<<num<<" is II in Roman numerals"; 
                             num2 = 1;
                             break; 
                         case 3 : 
                             cout<<num<<" is III in Roman numerals"; 
                             num2 = 1;
                             break; 
                         case 4 : 
                             cout<<num<<" is IV in Roman numerals";
                             num2 = 1;
                             break; 
                         case 5 : 
                             cout<<num<<" is V in Roman numerals"; 
                             num2 = 1;
                             break; 
                         case 6 : 
                             cout<<num<<" is VI in Roman numerals"; 
                             num2 = 1;
                             break; 
                         case 7 : 
                             cout<<num<<" is VII in Roman numerals"; 
                             num2 = 1;
                             break; 
                         case 8 : 
                             cout<<num<<" is VIII in Roman numerals"; 
                             num2 = 1;
                             break; 
                         case 9 : 
                             cout<<num<<" is IX in Roman numerals"; 
                             num2 = 1;
                             break; 
                         case 10 : 
                             cout<<num<<" is X in Roman numerals"; 
                             num2 = 1;
                             break; 
                         default :
                             cout<<"Entered number is not valid, reenter number:\n";
                             num2 = 2;

                     }  
                } while (num2 != 1); 
                break; 
            }
            case '3':{
                //Declare Variable Data Types and Constants
                int month, day, year; 
                //Process or map Inputs to Outputs
                cout<<"Enter a month:\n";
                cin>>month; 
                cout<<"Enter a day:\n";
                cin>>day; 
                cout<<"Enter a year:\n"; 
                cin>>year; 

                if ((month*day) == year) 
                {
                    cout<<"The date is magic"; 
                }
                else 
                {
                    cout<<"The date is not magic"; 
                }  
                break; 
            }
            case '4':{
                //Declare Variable Data Types and Constants
                int width1, height1, width2, height2; 
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Enter the width of rectangle 1:\n"; 
                cin>>width1; 
                cout<<"Enter the height of rectangle 1:\n"; 
                cin>>height1; 
                cout<<"Enter the width of rectangle 2:\n"; 
                cin>>width2; 
                cout<<"Enter the height of rectangle 2:\n"; 
                cin>>height2; 
                //Display Outputs
                if ((width1*height1)==(width2*height2))
                {
                    cout<<"The rectangles have the same area"; 
                }
                else if ((width1*height1) > (width2*height2))
                {
                    cout<<"Rectangle 1 has the greater area"; 
                }
                else 
                {
                    cout<<"Rectangle 2 has the greater area"; 
                }
                break; 
            }
            case '5':{
                //Declare Variable Data Types and Constants
                double mass, weight; 
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Enter the mass of an object:\n"; 
                cin>>mass; 
                weight = mass*9.8; 
                //Display Outputs
                if (weight > 1000) 
                {
                    cout<<"The object is too heavy"; 
                }
                else if (weight < 10) 
                {
                    cout<<"The object is too light"; 
                }
                else 
                {
                    cout<<fixed<<setprecision(1)<<showpoint; 
                    cout<<"The object weighs "<<weight<<" newtons"; 
                } 
                break; 
            }
            case '6':{
                //Declare Variable Data Types and Constants
                int books; 
                //Process or map Inputs to Outputs
                cout<<"Enter how many books you purchased this month:\n"; 
                cin>>books; 

                //Display Outputs
                if (books == 0) 
                {
                    cout<<"You earned 0 points."; 
                }
                else if (books == 1) 
                {
                    cout<<"You earned 5 points."; 
                }
                else if (books == 2) 
                {
                    cout<<"You earned 15 points."; 
                }
                else if (books == 3) 
                {
                    cout<<"You earned 30 points."; 
                }
                else if (books >= 4) 
                {
                    cout<<"You earned 60 points."; 
                }
                else 
                {
                    cout<<"That is an incorrect number of books.";
                }
                break; 
            }
            case '7':{
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
                break; 
            }
            case '8':{
                //Declare Variable Data Types and Constants
                float userTemp, ethFP, ethBP, mercFP, mercBP, oxyFP, oxyBP, waterFP, waterBP; 
                //Initialize Variables
                ethFP = -173; 
                ethBP = 172; 
                mercFP = -38; 
                mercBP = 676; 
                oxyFP = -362; 
                oxyBP = -306; 
                waterFP = 32; 
                waterBP = 212; 
                //Process or map Inputs to Outputs
                cout<<"Enter a temperature:\n"; 
                cin>>userTemp; 

                if (userTemp <= ethFP) 
                {
                    cout<<"Ethyl alcohol will freeze\n"; 
                }
                if (userTemp <= mercFP) 
                {
                    cout<<"Mercury will freeze\n"; 
                }
                if (userTemp <= oxyFP) 
                {
                    cout<<"Oxygen will freeze\n"; 
                }
                if (userTemp <= waterFP) 
                {
                    cout<<"Water will freeze\n"; 
                }
                if (userTemp >= ethBP) 
                {
                    cout<<"Ethyl alcohol will boil\n"; 
                }
                if (userTemp >= mercBP) 
                {
                    cout<<"Mercury will boil\n"; 
                }
                if (userTemp >= oxyBP) 
                {
                    cout<<"Oxygen will boil\n"; 
                }
                if (userTemp >= waterBP) 
                {
                    cout<<"Water will boil\n"; 
                }
                break; 
            } 
            case '9':{
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
                break; 
            }
            case '10':{
                //Declare Variable Data Types and Constants
                float time, cost; 
                int minutes; 
                //Initialize Variables

                //Process or map Inputs to Outputs
                cout<<"Enter the starting time:\n"; 
                cin>>time; 
                cout<<"Enter the number of minutes of the call:\n"; 
                cin>>minutes; 

                if (time < 7.00) 
                {
                    cost = 0.05*minutes; 
                }
                else if (7.00 <= time <= 19.0) 
                {
                    cost = 0.45*minutes; 
                }
                else if(19.00 <= time <= 23.59) 
                {
                    cost = 0.20*minutes; 
                }
                //Display Outputs
                cout<<"The charges are $"<<cost; 
                break; 
            }
            default:cout<<"Exiting Menu"<<endl;
        }
}while(choose<=nProbs);
    
    //Exit stage right!
    return 0;
}
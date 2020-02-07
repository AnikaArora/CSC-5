/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on 2/3/2020 at 8:00PM 
 * Purpose:  OverUnder7 version 3 
 */

//System Libraries
#include <iostream>
#include <stdlib.h> //rand() 
#include <ctime> //current date and time 
#include <cstring> 
#include <iomanip> //setprecision() 
#include <string> //name of user 
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand (time(NULL)); //random number seed for dice roll 
    //Declare Variable Data Types and Constants
    float dice1, 
          dice2, 
          totDice, //value of the dice roll 
          money; //initial amount of money in user's account  
    char cont; //determines if the user would like to continue the game 
    int bet; //the bet the user would like to place 
    bool win;
    string name; 
    //Initialize Variables 
    cont = 'y'; 
    
    //Set-up game 
    cout<<"What is your name?"; 
    cin>>name; 
    cout<<"How much money would you like to start with? Choose between $1 and $10\n";
    cin>>money; 
    
    //validate that money is a positive value and is at least $1 and not greater than $10 
    while (money < 1 || money > 10)
    {
        cout<<"That is an invalid amount of money, "<<name<<".\n"; 
        cout<<"How much money would you like to start with, "<<name<<"?"<<endl;  
        cin>>money; 
    } 
    
    do {
        win = false; //default win to false 
        //display possible outcomes for user to bet on 
        cout<<"What outcome would you like to bet on, "<<name<<"?"<<endl; 
        cout<<"1. Over 7 (1 to 1 odds)\n"; 
        cout<<"2. Under 7 (1 to 1 odds)\n"; 
        cout<<"3. Exactly 7 (5 to 1 odds)\n"; 
        cin>>bet; 
        
        //generate two individual random numbers between 1 and 6 and add up their values  
        dice1 = (rand() % 6) + 1; 
        dice2 = (rand() % 6) + 1; 
        totDice = dice1+dice2; 
        cout<<"The two dice rolled a total of "<<totDice<<".\n"; 

    
        //compares user's bet to dice roll 
        switch(bet) 
        {
            case 1: 
            {
                if (totDice > 7)
                {
                   win = true;  
                }
                break;
            }
            case 2: 
            {
                if (totDice < 7) 
                {
                    win = true; 
                }
                break;
            }
            case 3: 
            {
                if (totDice == 7) 
                {
                    win = true; 
                }
                break;
            }
        }
        
        //if statement to add/subtract money based on bet odds and if user won the round 
        if (win == true)
        {
            if (bet == 1)
            {
                money++; 
                cout<<"You won $1. You now have $"<<fixed<<setprecision(2)<<static_cast<double>(money)<<" in your bank, "<<name<<".\n"; 
            }
            else if (bet == 2) 
            {
                money++; 
                cout<<"You won $1. You now have $"<<fixed<<setprecision(2)<<static_cast<double>(money)<<" in your bank, "<<name<<".\n"; 
            }
            else 
            {
                money+=5; 
                cout<<"You won $5. You now have $"<<fixed<<setprecision(2)<<static_cast<double>(money)<<" in your bank, "<<name<<".\n"; 
            }
        }
        else if (win == false) 
        {
            money--; 
            cout<<"You did not win any money. You currently have $"<<fixed<<setprecision(2)<<static_cast<double>(money)<<" in your bank, "<<name<<".\n"; 
        }
    } while(cont == 'y' || cont == 'Y');
        
    cout<<"Thank you for playing the Over/Under 7 game, "<<name<<"!"; 
    //Display Outputs 
    
    //Exit stage right!
    return 0; 
}
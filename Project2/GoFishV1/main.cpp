/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on 2/8/2020 at 9:08PM 
 * Purpose: Go Fish! v.1 
 * 
 */

//System Libraries
#include <iostream>
#include <string>
#include <ctime> 
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void createDeck(string[], string[]); 
string shuffleDeck (string[]);
//class used to hold an array of cards 

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    string faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
                       "Eight", "Nine", "Ten", "Jack", "Queen", "King"}; 
    string deck[52]; 
    //Initialize Variables
    createDeck(faces, deck); 
    shuffleDeck(deck); 
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}
void createDeck(string faces[], string deck[]) 
{
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 13; j++)
        {
            deck[i+(13*j)] = faces[j]; 
        }
    }
}
string shuffleDeck(string deck[]) 
{
    srand(time(0)); 
    for (int i = 0; i < 52; i++) 
    {
        int r = i + (rand() % (52-1)); 
        swap(deck[i], deck[r]); 
    }
    int i = 0; 
    string fullDeck; 
    while (i < 52) 
    {
        fullDeck += deck[i]+" "; 
        i++; 
    }
    return fullDeck; 
}
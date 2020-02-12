/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on 2/11/2020 at 1:35PM 
 * Purpose: Go Fish! v.1 
 * 
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <ctime> 
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void createDeck(string[], string[]); 
void shuffleDeck (string[]);
void showDeck(string[]); 
void dealDeck(string[], string[], string[]); 
void remCardsP1(string[], string[]); 
void remCardsComp(string[], string[]); 
int checkMatches(string[]); //checks matches within hand, removes them, and returns number of matches 
void refillHand(string[], string[]); //refills hand to have a total of 7 cards 
//class used to hold an array of cards 

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    string faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
                       "Eight", "Nine", "Ten", "Jack", "Queen", "King"}; 
    string deck[52]; //deck of cards 
    string p1deck[7]; //player deck 
    string comDeck[7]; //computer deck 
    int p1match; //counts number of matches for P1; 
    int cmatch; //counts number of matches for computer; 
    //Initialize Variables
    p1match = 0; 
    cmatch = 0; 
    //Process or map Inputs to Outputs
    createDeck(faces, deck); 
    shuffleDeck(deck); 
    cout<<"Full deck: "; 
    showDeck(deck); 
    dealDeck(deck, p1deck, comDeck); 
    cout<<"Player 1 deck: ";
    showDeck(p1deck);
    cout<<"Computer deck: "; 
    showDeck(comDeck); 
    cout<<"Full deck: "; 
    showDeck(deck); 
    
    p1match += checkMatches(p1deck); 
    cmatch += checkMatches(comDeck); 
    refillHand(deck, p1deck); 
    refillHand(deck, comDeck); 
    
    cout<<"Player 1 deck: "; 
    showDeck(p1deck); 
    cout<<"Computer deck: "; 
    showDeck(comDeck); 
    
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
            deck[j+13*i] = faces[j]; 
        }
    }
}
void shuffleDeck(string deck[]) 
{
    srand(time(0)); 
    for (int i = 0; i < 52; i++) 
    {
        int r = rand() % (51-0); 
        swap(deck[i], deck[r]); 
    }
}
void dealDeck(string deck[], string p1deck[], string comDeck[]) 
{
    for (int i = 0; i < 7; i++)
    {
        p1deck[i] = deck[i]; 
        comDeck[i] = deck[i+7]; 
        deck[i] = ""; 
        deck[i+7] = ""; 
    }
}
void showDeck(string deck[])
{
    for (int i = 0; i < 52; i++)
    {
        cout<<deck[i]<<" "; 
    }
    cout<<endl; 
}
void remCardsP1(string deck[], string p1deck[])
{
    for (int i = 0; i < 13; i++)
    {
        if (deck[i] == p1deck[i])
        {
            deck[i] = ""; 
        }
    }
}
void remCardsComp(string deck[], string comDeck[]) 
{
    for (int i = 0; i < 13; i++)
    {
        if (deck[i] == comDeck[i])
        {
            deck[i] = ""; 
        }
    }
}
int checkMatches(string array[]) 
{
    int matches; 
    int i = 0; 
    while (array[i] != "") 
    {
        for (int i = 0; i < 7; i++) 
        {
            for (int j = 0; j < 7; j++) 
            {
                if (array[i] == array[j])
                {
                    array[i] = ""; 
                    array[j] = ""; 
                    matches++; 
                }
            }
        }
        i++; 
    }
    return matches; 
}
void refillHand(string deck[], string array[]) 
{
    for (int i = 0; i < 7; i++) 
    {
        if (array[i] == "")
        {
            for (int j = 0; j < 7; j++) 
            {
                if (deck[j] != "")
                {
                    array[i] = deck[j]; 
                    deck[j] = ""; 
                }
            }
        }
    }
}
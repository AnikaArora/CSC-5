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
bool checkDeck(string[], float deckCnt); //check if deck has any cards left 
int checkCard(string, string[]); //checks if use-chosen card is in opponent's hand 
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
    int match1; 
    int match2; 
    float* deckCnt, p1Cnt, comCnt; //used to check how many cards are left in the deck 
    bool chkDeck, chkP1, chkComp; //used to check if there are any cards left in the deck 
    
    string card; 
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
    match1 = 1; 
    match2 = 1; 
    while (match1 > 0 || match2 > 0) 
    {
        match1 = checkMatches(p1deck); 
        if (match1 > 0) 
        {
           p1match += checkMatches(p1deck); 
           refillHand(deck, p1deck); 
        }
        match2 = checkMatches(comDeck); 
        if (match2 > 0) 
        {
            cmatch += checkMatches(comDeck); 
            refillHand(deck, comDeck); 
        }
    }
    cout<<"Player 1 deck: "; 
    showDeck(p1deck); 
    cout<<"Computer deck: "; 
    showDeck(comDeck); 
    
    chkDeck = checkDeck(deck, *deckCnt); 
    chkP1 = checkDeck(p1deck, *p1Cnt); 
    chkComp = checkDeck(comDeck, *comCnt); 
    if (checkDeck == true || chkP1 == true || chkComp == true); 
    {
        bool chkCard = false; //used to validate user input of card 
        while (chkCard == false)
        {
            cout<<"Which card would you like to ask the computer for: \n"; 
            cout<<"Spell out the number or face card with standard capitalization.\n"; 
            cin>>card; 
            for (int i = 0; i < 13; i++) 
            {
                if (card == faces[i])
                {
                    chkCard = true; 
                }
                else 
                {
                    chkCard = false; 
                    cout<<"Invalid input.\n";
                }
            }
        }
        int num; 
        num = checkCard(card, comDeck); 
        if (num > 0) 
        {
            for (int i = 0; i < 7; i++)
            {
                if (comDeck[i] == card)
                {
                    comDeck[i] = ""; 
                    p1deck[i] = ""; 
                    p1match++; 
                    num--; 
                }
            }
        }
        else if (num == 0)
        {
            cout<<"Go Fish!"; 
        }
    }
    
    
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
    do
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
    }while (array[i] != ""); 
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
bool checkDeck(string deck[], float* deckCnt) 
{
    bool check; 
    int num = 0; 
    for (int i = 0; i < 52; i++)
    {
        if (deck[i] != "") 
        {
            num++; 
            deckCnt++; 
        }
    }
    if (num > 0) 
    {
        check = true; 
    }
}
int checkCard(string card, string deck[]) 
{
    int num = 0; 
    for (int i = 0; i < 7; i++) 
    {
        if (deck[i] == card)
        {
            num++;   
        }
    }
    return num; //if num > 0, match exists and num is the number of that type of card in opponent's hand. 
}
/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on 2/11/2020 at 1:35PM 
 * Purpose: Go Fish! v.4
 * 
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <ctime> 
#include <fstream> 
#include <random>
#include <stdlib.h>
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
void refillHand(string[], string[], int); //refills hand to have a total of 7 cards 
int checkDeck(string[]); //check if deck has any cards left and returns how many cards have been used 
int checkCard(string, string[]); //checks if user-chosen card is in opponent's hand and returns how many instances of it there are 
void p1Turn(int, int, string[], string, string[], bool, bool, string[], string[]);
void compTurn(int, int, int, int, string[], string, string[], bool, bool, string[], string[]);


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
    float deckCnt, p1Cnt, comCnt; //used to check how many cards are left in the deck 
    bool chkDeck, chkP1, chkComp; //used to check if there are any cards left in the deck 
    int cardRem; //number of cards used in deck 
    string card; //user input 
    ifstream in_stream; //file input 
    ofstream out_stream; //file output 
    int match = 0; 
    bool contp1 = true; 
    bool contCom = true; 
    //Initialize Variables
    p1match = 0; 
    cmatch = 0; 
    srand(time(NULL)); 
    //Process or map Inputs to Outputs
    //set-up game 
    createDeck(faces, deck); 
    shuffleDeck(deck); 
    dealDeck(deck, p1deck, comDeck); 
    cardRem = checkDeck(deck); 
    cout<<"Player 1 deck: ";
    showDeck(p1deck);
    
    
    cardRem = checkDeck(deck); 
    
    //check p1 hand for matches and refill hand accordingly 
    while (contp1 == true) 
    {
        
        match = 0; 
        match += checkMatches(p1deck); 
        refillHand(deck, p1deck, cardRem); 
        cardRem = checkDeck(deck); 
        cout<<"Player 1 deck: "; 
        showDeck(p1deck); 
        if (match > 0)
        {
            contp1 = true; 
            p1match += match; 
        }
        else 
        {
            contp1 = false; 
        }
    }
    //check computer hand for matches and refill hand accordingly 
    while (contCom == true)
    {
        match = 0; 
        match += checkMatches(comDeck); 
        refillHand(deck, comDeck, cardRem); 
        cardRem = checkDeck(deck); 
        if (match > 0)//if match was made 
        {
            contCom = true; 
            cmatch += match; 
        }
        else //if no match was made 
        {
            contCom = false; 
        }
        
    }
    //input p1match and cmatch into file 
    in_stream.open("GoFishStats", ios::in); 
    in_stream >> p1match >> cmatch; 
    in_stream.close(); 
    
    //output P1 matches and computer matches into file 
    out_stream.open("GoFishStats", ios::out); 
    out_stream << "Player 1 has " << p1match << " matches so far." << endl; 
    out_stream << "The computer has " << cmatch << " matches so far." << endl; 
    out_stream.close();
    
    //loop to take turn 
    int randNum = (rand() % 13 + 1); 
    cardRem = checkDeck(deck); 
    do 
    {
        p1Turn(cardRem, p1match, deck, card, faces, chkP1, chkComp, comDeck, p1deck); 
        compTurn(cmatch, randNum, cardRem, p1match, deck, card, faces, chkP1, chkComp, comDeck, p1deck); 
        cardRem = checkDeck(deck); //checks number of cards remaining in deck 
    }while (cardRem < 0);
    //Display Outputs 
    //determine winner 
    if (p1match > cmatch) 
    {
        cout<<"You win. Thank you for playing."; 
    }
    else 
    {
        cout<<"You lost. Thank you for playing."; 
    }
    //Exit program 
    exit(0); 
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
    for (int i = 0; i < 7; i++)
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
    int b = 0; 
    int i; // Need to declare i here so that it can be accessed by the 'inner' loop that starts on line 21
    for(i = 0;i < 6; i++) // Check each number in the array
    { 
        for(int j = i; j < 6; j++) // Check the rest of the numbers
        { 
            if(j != i) // Makes sure don't check number against itself
            { 
                if(array[i] == array[j] && array[i] != "") 
                {
                    b++; 
                    array[i] = ""; 
                    array[j] = ""; 
                }
            }
            
        }
    }
    return b; 
}
void refillHand(string deck[], string array[], int cardRem) 
{
    int i = cardRem; 
    for (int j = 0; j < 7; j++) 
    {
        if (array[j] == "")
        {
            array[j] = deck[i]; //refills hand with random card from deck 
            deck[i] = ""; 
            cardRem--; 
        }
    }
}
int checkDeck(string deck[]) 
{
    int num = 0; 
    for (int i = 0; i < 52; i++)
    {
        if (deck[i] == "") 
        {
            num++; //counts number of spots in array that do not have cards 
        }
    } 
    return (52-num); //returns number of cards left in deck
}
int checkCard(string card, string deck[]) 
{
    int num = 0; 
    for (int i = 0; i < 7; i++) 
    {
        if (deck[i] == card)
        {
            num++; //checks if card is in hand 
        }
    }
    return num; //if num > 0, match exists and num is the number of that type of card in opponent's hand. 
}
void p1Turn(int cardRem, int p1match, string deck[], string card, string faces[], bool chkP1, bool chkComp, string comDeck[], string p1deck[])
{
    if (cardRem > 0 || chkP1 == true || chkComp == true) 
    {
        bool chkCard = false; //used to validate user input of card 
        while (chkCard == false)
        {
            cout<<"Player 1 deck: "; 
            showDeck(p1deck); 
            checkMatches(p1deck); 
            cardRem = checkDeck(deck); 
            refillHand(deck, p1deck, cardRem); 
            cout<<"Which card would you like to ask the computer for: \n"; 
            cout<<"Spell out the number or face card with standard capitalization.\n"; 
            cin>>card; 
            //validate user input 
            for (int i = 0; i < 13; i++) 
            {
                if (card == faces[i])
                {
                    chkCard = true; 
                }
            }
            if (chkCard == false)
            {
                cout<<"Invalid input"<<endl; 
            }
        }
        int num; 
        bool check; 
        num = checkCard(card, comDeck); 
        if (num > 0) 
        {
            for (int i = 0; i < 7; i++)
            {
                if (comDeck[i] == card) //checks if opponent has card 
                {
                    comDeck[i] = ""; //remove card from hand 
                    num--; 
                    p1match++; //add 1 to match count 
                    cout<<"You made a match!"<<endl; 
                    cardRem = checkDeck(deck); 
                    refillHand(deck, comDeck, cardRem); 
                    check = true; 
                    cardRem = checkDeck(deck); 
                }
                if (check)
                {
                    if (p1deck[i] == card)//remove card from player 1's hand 
                    {
                        p1deck[i]=""; 
                        refillHand(deck, p1deck, cardRem); 
                        cardRem = checkDeck(deck); 
                    }
                }
            }
        }
        else if (num == 0)
        {
            cout<<"Go Fish!"<<endl; 
            cardRem = checkDeck(deck); 
            refillHand(deck, p1deck, cardRem); 
        }
    }
}
void compTurn(int cmatch, int randNum, int cardRem, int p1match, string deck[], string card, string faces[], bool chkP1, bool chkComp, string comDeck[], string p1deck[])
{
    if (cardRem > 0 || chkP1 == true || chkComp == true) 
    {
        card = faces[randNum]; 
        int num; 
        num = checkCard(card, p1deck); //checks if card is in the opponent's hand 
        if (num > 0) 
        {
            for (int i = 0; i < 7; i++)
            {
                if (p1deck[i] == card)
                {
                    p1deck[i] = ""; 
                    num--; 
                    cmatch++; 
                    cout<<"The computer made a match."<<endl; 
                    cardRem = checkDeck(deck); 
                    refillHand(deck, p1deck, cardRem); 
                    cardRem = checkDeck(deck); 
                    if (comDeck[i] == card) 
                    {
                        comDeck[i] = ""; 
                        refillHand(deck, comDeck, cardRem); 
                        cardRem = checkDeck(deck); 
                    }
                }
            }
        }
        else 
        {
            cout<<"The computer did not make a match."; 
            cardRem = checkDeck(deck); 
            refillHand(deck, comDeck, cardRem); 
        }
    }
}
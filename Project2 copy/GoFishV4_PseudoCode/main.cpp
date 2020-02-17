/* 
 * File:   main.cpp
 * Author: Anika Arora 
 * Created on 2/11/2020 at 1:35PM 
 * Purpose: Go Fish! v.4
 * 
 */

//System Libraries
//Input Output library 
//Strings 
//Time to set the Seed 
//File stream library 
//random numbers 
//format library 
//namespace std of system libraries 

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
//creates deck 
//shuffles deck 
//displays deck 
//deals 7 cards to each player 
//removes used cards from deck 
//removes used cards from deck 
//checks matches within hand, removes them, and returns number of matches 
//refills hand to have a total of 7 cards 
//check if deck has any cards left and returns how many cards have been used 
//checks if user-chosen card is in opponent's hand and returns how many instances of it there are 
//player 1 turn 
//computer turn 

//Execution Begins Here
//Main --> executable code begins here 
    //Declare Variable Data Types and Constants and Initialize 
    //array holding possible cards 
    //array holding deck of cards 
    //array holding player deck 
    //array holding computer deck 
    //counts number of matches for P1; 
    //counts number of matches for computer; 
    //floats used to check how many cards are left in the deck 
    //bools used to check if there are any cards left in the deck 
    //number of cards used in deck 
    //user input card 
    //file in-stream 
    //file out-stream 
    //place holder for number of matches for player 1 or computer 
    //bool used to check if player 1 has a match in their hand 
    //bool used to check if the computer has a match in their hand 
    //set number of matches for player 1 to 0 
    //set number of matches for computer to 0 
    //set random number seed 
    
//Process or map Inputs to Outputs
    //set-up game 
    //create deck 
    //shuffle deck 
    //deal deck 
    //check how many cards are remaining 
    //display player 1 deck 
    
    
    //check how many cards are remaining 
    
    //check p1 hand for matches and refill hand accordingly 

    //while player 1 has a match in their hand 
        //remove matches and refill hand 
        //adds number of matches to p1match 
        //check how many cards are remaining 
        //checks number of matches again 
        //if there is a match 
            //repeat loop 
        //else 
            //end loop 
   
    //check computer hand for matches and refill hand accordingly 
    //while computer has a match in their hand 
        //remove matches and refill hand 
        //adds number of matches to cmatch 
        //checks how many cards are remaining 
        //checks number of matches again 
        //if there is a match 
            //repeat loop 
        //else 
            //end loop 
     
    //input p1match and cmatch into file 
    //open file 
    //input p1match and cmatch 
    //close file 
    
    //output P1 matches and computer matches into file 
    //open file 
    //output number of matches of player 1 
    //output number of matches of computer 
    //close file 
    
    //loop to take turn 
    //set random number 
    //check if there are any cards left in the deck 
    //while there are cards left in the deck  
        //player 1 takes turn 
        //computer takes turn 
        //check how many cards are remaining in the deck 
    
    //Display Outputs 
    //determine winner 
    //if player 1 has more matches 
        //display win message 
    //else 
        //display lose message 
    
    //Exit program 

//function to create deck 
    //input each of the 13 faces into deck and repeat until deck is full 
//function to shuffle deck 
    //set random number seed 
    //swap one card in deck with another 
//function to deal deck 
    //give player one first seven cards 
    //give computer the second seven cards 
//function to display deck 
    //displays player's hand 
//function to check remaining cards for player 1 
    //check if card in deck matches card in player 1 hand 
//function to check remaining cards for computer 
    //check if card in deck matches card in computer hand 
//function to check matches within a hand 
    // Check each number in the array
        // Check the rest of the numbers
            // Makes sure don't check number against itself
                //if match exists 
                    //remove card 
                    //add one to number of matches 
    //return number of matches made 
//function to refill hand after creating a match 
    //check each card in hand 
        //if no card exists 
            //add card from deck 
            //remove that card from the deck 
//function to check how many cards are remaining in the deck 
    //check each spot in deck array 
        //if card does not exist 
            //add one to count 
    //return (52-count) --> return number of cards left in the deck 
//function to check if user input for card is in computer's hand 
    //check each card in hand 
        //if card matches a card in computer's hand 
            //add one to count 
    //return count 
    //if num > 0, match exists and num is the number of that type of card in opponent's hand. 
//function for player 1 turn 
    //if there are cards in the deck/player 1's hand/computer's hand 
        //used to validate user input of card 
        //validate user input of card 
            //display player 1 deck 
            //check if p1 deck has any matches 
            //refill player 1 hand 
            //ask user for card input 
            //check through array filled with all possible card values 
                //if card exists 
                    //exit loop 
                //else 
                    //invalid input message and loop again 
        //check if card is in computer's hand 
        //if matches is greater than 0 
        //check through computer's hand 
            //if card matches computer's card 
                //increase player 1 matches by 1 
                //remove card from computer deck 
                //display match statement 
                //check if cards are remaining in the deck 
                //refill computer's hand with cards from the deck 
                //set bool check = true 
                //check how many cards are remaining after refilling computer's hand 
            //if check = true 
                //remove card from player 1's hand 
                //refill hand with cards from deck 
                //check how many cards are remaining in deck 
        //else if matches = 0 
            //display go fish message 
            //check how many cards are left in the deck 
            //add card to player 1 hand 
//function to take computer turn 
    //if there are cards left in the deck/player 1's hand/computer's hand 
        //use random number generator to chose card 
        //checks if card is in the opponent's hand 
        //if match exists 
            //run through player 1's hand 
                //if card in hand matches random card 
                    //remove card from player 1's hand 
                    //add match to cmatch 
                    //display match message 
                    //check number of cards remaining in the deck 
                    //if computer's hand matches card 
                        //remove card from computer's hand 
                        //refill computer's hand with cards from the deck 
                        //check number of cards remaining in the deck 
        //else 
            //display no match made message 
            //check number of cards remaining in the deck 
            //refill computer's hand with cards from the deck 
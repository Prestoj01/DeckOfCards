/*Preston Johnson
CPSC 1071: 05
Team Number 2 CTRL+C CTRL+V
Date 11/5/2023*/

#include "Card.h"
#include "DeckOfCards.h"
#include <iostream>

using namespace std;

/*The purpose of this code is to create classes for a deck of cards and the individual cards within said deck
These classes will be able to be used on future project involving card games because of the vaious useful
function provided in these classes.*/

int main() {
    Card firstCard(1, 1);
    cout << firstCard.toString() << endl; // should output Ace of Hearts

    Card secondCard(2, 1);
    cout << secondCard.toString() << endl; // should output Deuce of Hearts
    
    DeckOfCards deck; // generates ordered deck of 52 cards
    cout << deck.getCurrentCard().toString() << endl; // should output Ace of Hearts

    deck.dealCard(); //tests the dealcard function
    cout << deck.getCurrentCard().toString() << endl; // should output deuce of hearts

    deck.shuffle(); //tests the shuffle function
    cout << deck.getCurrentCard().toString() << endl; // should output random card

    //test for the more cards function
    if (deck.moreCards() == true) {
        cout << "More cards function works" << endl;
    }
}
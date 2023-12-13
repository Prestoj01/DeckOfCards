#include "DeckOfCards.h"
#include "Card.h"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

//constructor for deck of cards
DeckOfCards::DeckOfCards() {
    for (int suit = 1; suit < 5; suit++) {
        for (int face = 1; face < 14; face++) {
            deck.push_back(Card(face, suit));
        }
    }

    //sets current card index to 0
    currentCard = 0;
}

//function to randomize the deck
void DeckOfCards::shuffle() {
    std::srand(static_cast<unsigned>(std::time(0)));

    //sets n to the size of the deck
    int n = deck.size();

    //for loop that sets a random number then uses a temporary card to switch two cards around based on that number within deck
    for (int i = 0; i < n; i++) {
        int r = std::rand() % n;
        Card temp = deck[i];
        deck[i] = deck[r];
        deck[r] = temp;
    }

}

//function to deal a card from the deck
Card DeckOfCards::dealCard() {
    //checks if there are cards avaliable then returns a card and adds 1 to the current card
    if (moreCards()) {
        return deck[currentCard++];
    }
    else {
        std::cout << "No cards left" << std::endl;
        return deck[0];
    }
}

//function that returns the current card for testing
Card DeckOfCards::getCurrentCard() {
    return deck[currentCard];
}

//function to check if there are cards avalible still in the deck
bool DeckOfCards::moreCards() {
    return currentCard < 52;
}
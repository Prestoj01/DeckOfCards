#include "Card.h"

#include <iostream>

const std::string Card::facesStr[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
const std::string Card::suitsStr[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

//Initilizes the cards and subtracts one from the face and suit to match up with enumerated types
Card::Card(int face, int suit) {
    face--;
    suit--;
    //Checks if the numbers are valid
    if (face >= 0 && face <= 12 && suit >= 0 && suit <= 3) {
        this->face = static_cast<Faces>(face);
        this->suit = static_cast<Suits>(suit);
    }
    //returns invalid card if number are not valid
    else {
        std::cout << "Invalid Card" << std::endl;
    }
}

//Returns the cards in string format
std::string Card::toString() {
    return facesStr[static_cast<int>(face)] + " of " + suitsStr[static_cast<int>(suit)];
}
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include <vector>
#include "Card.h"

class DeckOfCards {
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
    Card getCurrentCard();

private:
    std::vector<Card> deck;
    int currentCard;
};

#endif
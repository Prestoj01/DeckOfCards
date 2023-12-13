#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
public:
    Card(int face, int suit); //Constuctor

    std::string toString();

    static const std::string facesStr[];
    static const std::string suitsStr[];

private:
    enum Faces {Ace, Deuce, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};
    enum Suits {Hearts, Diamonds, Clubs, Spades};

    int face;
    int suit;
};

#endif
/*                           *\  
    DO NOT MODIFY THIS FILE
\*                           */

#include <iostream>
#include <ctime>
#include <random>
using namespace std;

#ifndef DECK_H
#define DECK_H

#include "card.h"

const int MAX_CARDS = 52;

class Deck {
    private:
        Card* cards;
        int size;

    public:
        /* Default Constructor
            dynamically initializes a 52-Card array in rank/suit order */
        Deck();

        /* Copy Constructor 
            copies another Deck */
        Deck(const Deck&);

        /* Assignment Operator
            copies to another Deck */
        void operator=(const Deck&);

        /* bool Deck::isEmpty
            returns true if the Deck contains no cards, otherwise false */
        bool isEmpty() const;

        /* int Deck::getSize
            returns the number of Cards in the Deck */
        int getSize() const;

        /* Card Deck::peek 
            returns the top Card of the Deck */
        Card peek() const;

        /* Card Deck::draw 
            removes the top Card of the Deck and returns it */
        Card draw();

        /* void Deck::addTop(const Card&)
            places a Card on the top of the deck */
        void addTop(const Card&);

        /* void Deck::shuffle
            randomly changes the sequence of Cards in the deck */
        void shuffle();

        /* void print(ostream&)
            outputs the Deck enclosed in brackets
            ex. [AC, AD, AH, AS, 2C, 2D, 2H, 2S, ... ]
        */
        void print(ostream&) const;

        /* Destructor
            deallocates the array */
        ~Deck();
};

ostream& operator<<(ostream&, const Deck&);

#endif

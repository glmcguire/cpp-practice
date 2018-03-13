#include "Card.h"



Card::Card() {
	Number = 0;
	Suit = "";
}

Card::Card(int number, string suit) {
	Number = number;
	Suit = suit;
}



int Card::GetNumber() {
	return Number;
}

string Card::GetSuit() {
	return Suit;
}

void Card::AssignValues(int number, string suit) {
	Number = number;
	Suit = suit;
}


Card::~Card() {
}

ostream & operator<<(ostream & os, const Card & card) {

	if (card.Number == 1) {
		os << "Ace of " << card.Suit;
	} else if (card.Number == 11) {
		os << "Jack of " << card.Suit;
	} else if (card.Number == 12) {
		os << "Queen of " << card.Suit;
	} else if (card.Number == 13) {
		os << "King of " << card.Suit;
	} else {
		os << card.Number << " of " << card.Suit;
	}
	return os;
}

#include "Deck.h"

Deck::Deck() {
}

void Deck::PrintCard(int i) {
	cout << Cards[i];
}

void Deck::PrintDeck() {
	for (int i = 0; i < 52; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		PrintCard(i);
		cout << endl;
	}
}


Deck::~Deck() {
}


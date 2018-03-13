#include "Deck.h"

Deck::Deck() {
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 4; j++) {
			Cards[i * 4 + j].AssignValues(ArrayNumbers[i], ArraySuit[j]);
		}
	}
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

void Deck::Shuffle() {
	int x, y;
	Card TempCard;
	srand(time(NULL));
	for (int i = 0; i < ShuffleTimes; i++) {
		x = rand() % 51;
		y = rand() % 51;
		TempCard.AssignValues(Cards[x].GetNumber(), Cards[x].GetSuit());
		Cards[x] = Cards[y];
		Cards[y] = TempCard;
	}
}

Card Deck::GetCard(int i) {
	return Cards[i];
}

Deck::~Deck() {
	ArrayNumbers;
	ArraySuit;
}


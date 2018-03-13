#pragma once
#include <iostream>
#include "Card.h"



class Deck {

private:
	int x;
	Card Cards[52];
	int ArrayNumbers[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	string ArraySuit[4] = {"Heart", "Clubs", "Spades", "Diamond"};

public:
	Deck();
	void PrintCard(int i);
	void PrintDeck();
	void Shuffle();
	Card GetCard(int i);

	~Deck();
};


#pragma once
#include <vector>
#include "Card.h"

class Hand {
private:
	vector <Card> Cards;
	string Name;

public:
	Hand();
	Hand(string);
	string GetName();
	void AppendCard(Card card);

	~Hand();
};
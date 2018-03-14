#pragma once
#include <vector>
#include "Card.h"

class Hand {
private:
	vector <Card> Cards;
	string Name;

public:
	Hand();
	Hand(string name);
	string GetName();
	void AppendCard(Card card);
	void PrintHand();
	Card Discard(int amt);
	bool operator==(Hand hand);
	bool VoidHand();
	void FeedFromBack(Card card);
	int SizeCards();

	~Hand();
};
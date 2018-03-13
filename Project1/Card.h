#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

class Card {

private:
	int Number;
	string Suit;

public:
	Card();
	Card(int number, string suit);
	int GetNumber();
	string GetSuit();
	void AssignValues(int number, string suit);
	friend ostream &operator<<(ostream& os, const Card& card);

	~Card();
};


#include "Hand.h"



Hand::Hand() {
}

Hand::Hand(string name) {
	Name = name;
}

string Hand::GetName() {
	return Name;
}

void Hand::AppendCard(Card card) {
	Cards.insert(Cards.begin(), card);
}

void Hand::PrintHand() {
	int i = 0;
	vector <Card> :: iterator j;
	for (j = Cards.begin(); j != Cards.end(); i++) {
		i++;
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		cout << *j << endl;
	}
}

Card Hand::Discard(int amt) {
	Card card;
	vector<Card> ::iterator i;
	i = Cards.begin();
	for (int j = 0; j < amt; j++) {
		i++;
	}
	card = *i;
	Cards.erase(i);
	return card;
}

bool Hand::operator==(Hand hand) {
	if (Name == hand.GetName()) {
		return 1;
	} else {
		return 0;
	}
}

bool Hand::VoidHand() {
	if (Cards.size() == 0) {
		return 1;
	} else {
		return 0;
	}
}

void Hand::FeedFromBack(Card card) {
	Cards.insert(Cards.end(), card);
}

int Hand::SizeCards() {
	return Cards.size();
}


Hand::~Hand() {
}

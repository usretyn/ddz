#pragma once
#include "Suit.h"
#include <vector>
#include <stdio.h>
NS_POKER_BEGIN class Card
{

private:
	 int rank;
	 Suit suit;
private:
	Card();
public:
    int getRank();
	Suit getSuit();
	static std::vector<Card*> getPack();
};
NS_POKER_END

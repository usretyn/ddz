#include "stdafx.h"
#include "Card.h"

USING_NS_POKER;
Card::Card(void)
{
	//for(int i=0;i<
}

int Card::getRank(){
	return this->rank;
}

Suit Card::getSuit(){
	return this->suit;
}

std::vector<Card*> Card::getPack(){
	
}
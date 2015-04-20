#include "stdafx.h"
#include "Rule.h"
USING_NS_POKER;

Rule::Rule(void)
{
	this->minOutCardCount = 1;
}


Rule::~Rule(void)
{
}

void Rule::addUnusedCard(Suit suit,int rank){
	Card *card = new Card();
	card->setSuit(suit);
	card->setRank(rank);
	//this->unusedCard.
	//std::
	this->unusedCard.push_back(card);
}

vector<Card*> Rule::getUnusedCard(){
	return this->unusedCard;
}
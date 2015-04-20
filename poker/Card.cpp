#include "stdafx.h"
#include "Card.h"
#include <sstream>
USING_NS_POKER;
Card::Card(void)
{
	//for(int i=0;i<
}
void Card::setRank(int rank){
	this->rank = rank;
}

int Card::getRank(){
	return this->rank;
}

void Card::setSuit(Suit suit){
	this->suit= suit;
}

Suit Card::getSuit(){
	return this->suit;
}


int Card::getValue(){
	return this->suit*100+this->rank;
}

std::string Card::toString(){
	std::stringstream  ss;
	ss<<"suit="<<this->suit<<",rank="<<this->getRank()<<",value="<<this->getValue();
	return ss.str();
}

std::vector<Card*> Card::getPack(){
	std::vector<Card*> pack ;
	int i;
	int j;
	for(i=Suit::DIAMOND;i<=Suit::SPADE;i++){
		for(j=2;j<=14;j++){
			Card *card = new Card();
			card->setSuit(Suit(i));
			card->setRank(j);
			//card->setValue(i*100+j);
			pack.push_back(card);
		}
	}
	for(j=15;j<=16;j++){
			Card *card = new Card();
			card->setSuit(Suit(i));
			card->setRank(j);
			//card->setValue(i*100+j);
			pack.push_back(card);
	}
	return pack;
}
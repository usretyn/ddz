#pragma once
#include "Suit.h"
#include <vector>
#include <string>

NS_POKER_BEGIN class Card
{

private:
	 //顺序
	 int rank;
	 //花色
	 Suit suit;
	 //数值=suit*100+rank ，方便排序
	 int value;
public:
	Card();
public:
    int getRank();
	Suit getSuit();
	void setSuit(Suit suit);
	void setRank(int rank);
	int getValue();
	
	std::string toString();

	//获取整副牌
	static std::vector<Card*> getPack();

	//static std::vector<Card*> getPack(int count);
};
NS_POKER_END

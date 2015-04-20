#pragma once
#include "Suit.h"
#include <vector>
#include <string>

NS_POKER_BEGIN class Card
{

private:
	 //˳��
	 int rank;
	 //��ɫ
	 Suit suit;
	 //��ֵ=suit*100+rank ����������
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

	//��ȡ������
	static std::vector<Card*> getPack();

	//static std::vector<Card*> getPack(int count);
};
NS_POKER_END

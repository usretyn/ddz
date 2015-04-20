#pragma once
#include "poker.h"
#include <vector>
using namespace std;
NS_POKER_BEGIN class Rule
{
	
protected:
	int player;
	int packCount;
	int reserveCardCount;
	int maxOutCardCount;
	int minOutCardCount;
	vector<Card*> unusedCard;
public:
	void addUnusedCard(Suit,int);
	vector<Card*> getUnusedCard();
	virtual bool judgeCategory(vector<Card*>);
	
	Rule(void);
	~Rule(void);
};

NS_POKER_END
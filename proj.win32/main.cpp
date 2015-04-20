#include "main.h"
#include "AppDelegate.h"
#include "cocos2d.h"
#include "poker\poker.h"
#include <algorithm>




USING_NS_CC;
USING_NS_POKER;
int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // create the application instance
    //AppDelegate app;
    //return Application::getInstance()->run();
	auto pack = poker::Card::getPack();
	for(int i=0;i<pack.size();i++){
		auto card = pack.at(i);
		auto str = card->toString();
		cocos2d::log("%s",str.c_str());
		//std::cout<<str<<std::endl;
		//OutputDebugStringA(TEXT(str));
	}
		cocos2d::log("=============================================");
	std::random_shuffle(pack.begin(),pack.end());
	//std::vector<Card*> p1;
	std::stringstream ss;
	for(int i=0;i<pack.size();i++){
		auto card = pack.at(i);
		int rank = card->getRank();
		switch (rank)
		{
			case 10:
				ss<<'T';
			break;
		case 11:
			ss<<'J';
			break;
		case 12:
			ss<<'Q';
			break;
		case 13:
			ss<<'K';
			break;
		case 14:
			ss<<'A';
			break;
		case 15:
			ss<<'W';
			break;
		case 16:
			ss<<'w';
			break;
		default:
			ss<<rank;
			break;
		}
		
		//std::cout<<str<<std::endl;
		//OutputDebugStringA(TEXT(str));
	}
	cocos2d::log("%s",ss.str().c_str());
	return 0;
}

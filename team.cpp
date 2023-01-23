	1q#include <string>;
#include "team.h";
using namespace std; 

//----------------------------------------------------------------
//		 Implementation of "astats"-Class
//----------------------------------------------------------------

int astats::getPts() { return ptsMade; }
int astats::getAttempts() { return ptsAttempted; }

void astats::setPts(int Points) { Points = ptsMade; }
void astats::setAttempt(int Attempts) { Attempts = ptsAttempted; }
double astats::setPerc(int Points, int Attempts) {
	int perc = 0;
	int mm = Points;
	int nnn = Attempts;
	if ((mm = 0) || (nnn = 0)) {
		perc = 0;
		return perc;
	}
	else {
		perc = mm / nnn;
		return perc;
	}
}
//--------------------------------------------------------------------
//		Implementation of "player"-Class
//--------------------------------------------------------------------

//------------Gets

string player::getPlayerName() { return PlayersName; }
int player::getJerseyNumber() { return JerseyNumber; }
int player::getGamesPlayed() { return GamesPlayed; }
int player::getThreePTM() { int ThreePtM; }
int player::getThreePTA() { int ThreePtA; }
int player::getTwoPTM() { int TwoPtM; }
int player::getTwoPTA() { int TwoPtA; }
int player::getFTM() { int FreeThrwsM; }
int player::getFTA() { int FreeThrwsA; }

//-------------Sets

void player::setPlayerName(string Name) {
	PlayersName = Name;
}
void player::setJerseyNumber(int Number) {
	JerseyNumber = Number;
}
void player::setGamesPlayed(int Games) {
	if (Games < Max_Games)
		GamesPlayed = Games;
	else {}
}
void player::setThreePTM(int ThreePtsMade) {
	ThreePtM = ThreePtsMade; 
}
void player::setThreePTA(int ThreePtsAttempt) {
	ThreePtA = ThreePtsAttempt;
}
void player::setTwoPTM(int TwoPtsMade) {
	TwoPtM = TwoPtsMade;
}
void player::setTwoPTA(int TwoPtsAttempt) {
	TwoPtA = TwoPtsAttempt;
}
void player::setFTM(int FreeThrowsMade) {
	FreeThrwsM = FreeThrowsMade; 
}
void player::setFTA(int FreeThrowsAttempt) {
	FreeThrwsA = FreeThrowsAttempt;
}
void player::setPlayerArray(int playerArray) {

}

//-----------------------------------------------------------------
//		Implementation of "team"-Class
//-----------------------------------------------------------------
//-----------------Gets



//-----------------Sets


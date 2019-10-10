#include "player.h"
using namespace std;

namespace bowling {
class Game {
public:
	Player *firstPlayer, *secondPlayer;
	Game(Player *player1, Player *player2);
	void changeRound(int round);
	void toggleCurrentPlayer();
	void setScore(int score);
	string getCurrentPlayerName();
private:
	int currentRound;
	Player *currentPlayer;
	int currentPlayerNum;
	int scoreCurrentPlayerRound;
};
}
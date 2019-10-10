#include "game.h"
using namespace std;

namespace bowling {
class RunGame {
public:
	Game *game;
	int currentRound;
	RunGame();
	bool simulateGame (Player *firstPlayer, Player *secondPlayer);
private:
	void roundForPlayer(bool lastRound);

};
}
#include "runGame.h"
#include <iostream>
using namespace std;

namespace bowling {
RunGame::RunGame() {
	currentRound = 0;
	game = NULL;
}
bool RunGame::simulateGame (Player *firstPlayer, Player *secondPlayer) {
	game = new Game(firstPlayer, secondPlayer);
	for (int i=1; i<=10; i++) {
		game->changeRound(i);
		currentRound = i;
		cout<<"Round: "<<i<<endl;
		roundForPlayer(i==10);
		roundForPlayer(i==10);
	}
	return true;
}

void RunGame::roundForPlayer(bool lastRound) {
	cout<<game->getCurrentPlayerName()<<": ";
	int numberOfHits = 2;
	if (lastRound) {
		numberOfHits += 1;
	}
	int maxScore = 10;

	for (int i=0; i<numberOfHits; i++) {
		if (maxScore == 0 && !lastRound)	continue;
		if (maxScore == 0) {
			maxScore = 10;
		}

		int currentScore = rand() % (maxScore + 1);
		maxScore -= currentScore;
		game->setScore(currentScore);

		cout<<currentScore<<" ";
	}
	game->toggleCurrentPlayer();
	cout<<endl;
}

}
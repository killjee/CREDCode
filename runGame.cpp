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
	int maxScore = 10;

	for (int i=0; i<numberOfHits; i++) {
		if (maxScore == 0 && !lastRound)	continue;
		

		int currentScore = rand() % (maxScore + 1);
		int pcurrentScore = currentScore;
		if (currentScore == 10) {
			currentScore += 10;
		} else if (maxScore+currentScore == 10) {
			currentScore += 5;
		}
		maxScore -= pcurrentScore;
		game->setScore(currentScore);

		cout<<pcurrentScore<<" ";
		if (maxScore == 0 && lastRound) {
			maxScore = 10;
			numberOfHits = min(3, numberOfHits+1);
		}
	}
	game->toggleCurrentPlayer();
	cout<<endl;
}

}
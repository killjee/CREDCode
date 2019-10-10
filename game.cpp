#include "game.h"
#include<iostream>
using namespace std;

namespace bowling {
Game::Game(Player *player1, Player *player2) {
	firstPlayer = player1;
	secondPlayer = player2;
	currentRound = 0;
	currentPlayer = player1;
	currentPlayerNum = 1;
	int scoreCurrentPlayerRound = 0;
}

void Game::changeRound(int round) {
	currentRound = round;
}
void Game::toggleCurrentPlayer() {
	currentPlayer -> apendScoreOfCurrentRound(scoreCurrentPlayerRound);
	scoreCurrentPlayerRound = 0;
	if(currentPlayerNum == 1) {
		currentPlayer = secondPlayer;
		currentPlayerNum = 2;
	} else {
		currentPlayer = firstPlayer;
		currentPlayerNum = 1;
	}
}
void Game::setScore(int score) {
	scoreCurrentPlayerRound += score;
	currentPlayer -> incrementCurrentScore(score);
}
string Game::getCurrentPlayerName() {
	return currentPlayer->name;
}

}
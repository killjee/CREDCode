#include "player.h"
using namespace std;

namespace bowling {
Player::Player(string playerName, string playerMetaData) {
	name = playerName;
	playerMetaData = playerMetaData;
	currentScore = 0;
	previousRoundScores = new vector<int>();
}

void Player::incrementCurrentScore(int incremental) {
	currentScore += incremental;
}
int Player::getCurrentScore() {
	return currentScore;
}
void Player::apendScoreOfCurrentRound (int score) {
	(*previousRoundScores).push_back(score);
}
}
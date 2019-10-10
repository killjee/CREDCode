#include "runGame.h"
#include <iostream>
using namespace std;
using namespace bowling;

int main() {
	srand(clock());
	RunGame* runGame = new RunGame();
	Player *player1 = new Player("Yash", "I will win it");
	Player *player2 = new Player("Agarwal", "I will solve it");

	bool chk = runGame->simulateGame(player1, player2);

	Player *winner = NULL;
	if (player1->getCurrentScore() > player2->getCurrentScore()) {
		winner = player1;
	} else if (player1->getCurrentScore() < player2->getCurrentScore()) {
		winner = player2;
	}

	cout<<"So final score is\n";
	cout<<player1->name<<": "<<player1->getCurrentScore()<<endl;
	cout<<player2->name<<": "<<player2->getCurrentScore()<<endl;

	if (winner == NULL) {
		cout<<"It's a tie\n";
	} else {
		cout<<"Winner is "<<winner->name<<endl;
	}

}
#include "player.h"

namespace bowling {
	class game {
	public:
		player *player1, *player2;
		void changeRound(int round);
		void togglePlayerInCurrentRound();
		void setScore(int score);

	private:
		int currentRound;
		player currentPlayer;
		int scoreCurrentState;

	}
}
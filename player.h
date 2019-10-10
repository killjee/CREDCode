#include <string>
#include <vector>

namespace bowling {
	class player {
	public:
		string name;
		string metaData;

		player(string name, string metaData);

		void incrementCurrentScore (int incremental);
		int getCurrentScore();
		void apendScoreOfCurrentRound (int score);
	private:
		int currentScore;
		vector<int> previousRoundScores;

	}
}
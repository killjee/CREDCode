#include <string>
#include <vector>
using namespace std;

namespace bowling {
class Player {
public:
	string name;
	string metaData;

	Player(string playerName, string playerMetaData);

	void incrementCurrentScore (int incremental);
	int getCurrentScore();
	void apendScoreOfCurrentRound (int score);
private:
	int currentScore;
	vector<int> *previousRoundScores;
};
}
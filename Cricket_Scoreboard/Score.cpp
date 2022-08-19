#include "Score.h"
using namespace std;
void scoreboard(int balls, int wicket, string players, int score,int over)
{
	for (int i = 0; i<players.size(); i++)
	{
		Player x = players[i];
		cout<< x;
		cout << x.getRuns() << " " << x.getFours() << " " << x.getSixes() << " " << x.getBalls() << endl;
	}
}
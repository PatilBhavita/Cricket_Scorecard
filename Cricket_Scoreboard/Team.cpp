#include "Team.h"

void Team::setBattingorder() {
	
	for (int player = 0; player < numberofPlayers; player++) {
		string name;
		cin >> name;
		team[player] = name;
	}

}

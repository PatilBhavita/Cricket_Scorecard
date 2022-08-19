#pragma once
class Score :public Player
{
	string players;
	Score(string players)
	{
		this->players=players;
	}
	void scoreboard();

};


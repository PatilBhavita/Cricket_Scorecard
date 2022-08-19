#include "Player.h"
void Player::setRuns(int Runs)
{
	runs+= Runs;
	if (Runs == 4)
	{
		fours = fours++;
	}
	if (Runs == 6)
	{
		sixes = sixes++;
	}
}
int Player::getRuns()
{
	return runs+(fours*4)+(sixes*6);
}
int Player::getBalls()
{
	return balls;
}
int Player::getFours()
{
	return fours;
}
int Player::getSixes()
{
	return sixes;
}
int Player::getPos()
{
	return pos;
}
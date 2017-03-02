#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	Player();
	~Player();

	// This stores all rotation values
	float m_direction[4];

	int m_currentFacing;
};

#endif
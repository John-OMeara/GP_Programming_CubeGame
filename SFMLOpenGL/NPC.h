#ifndef NPC_H
#define NPC_H

// Non-Player Cube
class NPC
{
public:
	NPC();
	~NPC();

	float m_direction[4];
	int m_currentFacing;
};

#endif // !NPC_H
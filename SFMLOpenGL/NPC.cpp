#include "NPC.h"

NPC::NPC()
{
	m_currentFacing = 0;
	for (int i = 0; i < 4; i++)
	{
		// 1.5708 radians = 90 degrees
		m_direction[i] = 1.5708f * i;
	}
}

NPC::~NPC()
{
}

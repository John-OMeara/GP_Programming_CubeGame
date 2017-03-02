#ifndef GAME_H
#define GAME_H

#include <string>
#include <sstream>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>

#include <stdlib.h>  // for random numbers
#include <time.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#include <Debug.h>

#include <Player.h>
#include <NPC.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

using namespace std;
using namespace sf;
using namespace glm;

class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();

	bool checkCollision(glm::mat4 a, glm::mat4 b);

private:
	Player m_player;
	std::vector<NPC> m_npc;

	bool press = false;
	bool match = false;

	float m_90deg = 1.5708f;

	RenderWindow window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	std::vector<glm::mat4> m_cubeModels;
	void createCube(glm::mat4 model);
};

#endif
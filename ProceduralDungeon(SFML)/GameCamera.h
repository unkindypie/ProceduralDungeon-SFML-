#pragma once
#include "Content.h"
class GameCamera
{
	float x, y;
	float speed;
	Content * target;
	sf::RenderWindow & win;
	sf::View view;
public:

	GameCamera(Content * target, sf::RenderWindow & win);
	void move(float x, float y, float elapasedTime);
	void update(float elapasedTime);
	Content * getTarget();
	float getX();
	float getY();
	void deathcam();
	~GameCamera();
};


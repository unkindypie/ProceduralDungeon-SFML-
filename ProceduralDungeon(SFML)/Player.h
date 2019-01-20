#pragma once
#include "Entity.h"
#include "Bullet.h"

//#include "Sublevel.h"


class Player :
	public Entity
{
protected:
	int dirX, dirY;
	float currentTime;
	float shootingCooldown;
	int trys;
	ResourceManager & rm;
public:
	Player(float x, float y, Sublevel * sub, ResourceManager & rm);
	void draw(sf::RenderWindow & win);
	void movement(float elapsedTime);
	void update(float elapsedTime);
	void shoot();
	void decreaseHealth(float value);
	~Player();
};


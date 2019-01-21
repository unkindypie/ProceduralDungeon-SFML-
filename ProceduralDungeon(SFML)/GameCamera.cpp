#include "GameCamera.h"


GameCamera::GameCamera(Content * target, sf::RenderWindow & win) : win(win)
{
	this->target = target;
	x = win.getSize().x / 2;
	y = win.getSize().y / 2;
	view.reset(sf::FloatRect(x, y, win.getSize().x, win.getSize().y));
}
void GameCamera::update(float elapasedTime)
{
	if(x < target->getX())
	{
	/*	if(x - x > 0 && x + x < win.getSize().x)
		{*/
			move(target->getX(), y, elapasedTime);
		//}
	}
	if (x > target->getX())
	{
	/*	if (x - x > 0 && x + x < win.getSize().x)
		{*/
			move(target->getX(), y, elapasedTime);
		//}
	}
	if (y < target->getY())
	{
		move(x, target->getY(), elapasedTime);
	}
	view.setCenter(x, y);
	win.setView(view);
}
void GameCamera::move(float x, float y, float elapasedTime)
{
	if(this->x < x)
	{
		this->x += elapasedTime * 0.4;
		view.move(this->x, this->y);
	}
	if (this->x > x)
	{
		this->x -= elapasedTime * 0.4;
		view.move(this->x, this->y);
	}
	if (this->y < y)
	{
		this->y += elapasedTime * 0.4;
		view.move(this->x, this->y);
	}
	
}
float GameCamera::getX()
{
	return x;
}
float GameCamera::getY()
{
	return y;
}
GameCamera::~GameCamera()
{
}
#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <string>
#include <iterator>
using namespace std;

class ResourceManager
{
private:
	map<string, sf::Texture> textures; 
	map<string, sf::Sprite> sprites;
public:
	ResourceManager();
	void loadTexture(string path);
	map<string, sf::Sprite>::iterator loadSprite(string path, sf::IntRect rect);
	~ResourceManager();
};

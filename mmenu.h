#pragma once
#include "SFML/Graphics.hpp"
using namespace sf;
using namespace std;
#define maxm 3
class mmenu
{
public:
	mmenu(float width, float hight);
	~mmenu();
	void draw(RenderWindow& window);
	void MoveUp();
	void MoveDown();
	int getpreesd() { return index; }

private:
	int index;
	Font font;
	Text menu[maxm];


};
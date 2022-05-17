#include "mmenu.h"
using namespace sf;



mmenu::mmenu(float width, float hight)
{
	if (font.loadFromFile("date/goo.otf") == false)
	{

	}
	menu[0].setFont(font);
	menu[0].setFillColor(Color::Red);
	menu[0].setString("PLAY");
	menu[0].setStyle(Text::Bold);
	menu[0].setCharacterSize(65);
	menu[0].setPosition(Vector2f(520, 300));

	menu[1].setFont(font);
	menu[1].setFillColor(Color::Black);
	menu[1].setString("Option");
	menu[1].setStyle(Text::Italic);
	menu[1].setPosition(Vector2f(520, 400));

	menu[2].setFont(font);
	menu[2].setFillColor(Color::Black);
	menu[2].setString("Exit");
	menu[2].setStyle(Text::Italic);
	menu[2].setPosition(Vector2f(520, 500));
	index = 0;
}


mmenu::~mmenu()
{
}

void mmenu::draw(sf::RenderWindow& window)
{
	{
		for (int i = 0; i < maxm; i++)
			window.draw(menu[i]);
	}

}
void mmenu::MoveUp()
{
	if (index - 1 >= 0)
	{
		menu[index].setFillColor(Color::Black);
		menu[index].setCharacterSize(30);
		index--;
		menu[index].setFillColor(Color::Red);
		menu[index].setCharacterSize(60);

	}
}
void mmenu::MoveDown()
{
	if (index + 1 < maxm)
	{
		menu[index].setFillColor(Color::Black);
		menu[index].setCharacterSize(30);
		index++;
		menu[index].setFillColor(Color::Red);
		menu[index].setCharacterSize(60);
	}
}

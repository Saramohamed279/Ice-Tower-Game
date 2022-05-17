#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp> 
#include<iostream>
#include "mmenu.h"
using namespace std;
using namespace sf;
struct point //1
{
	int x;
	int y;
};
void text(int n, Text m[], RenderWindow& k)
{
	for (int i = 0; i < n; i++)
		k.draw(m[i]);
}
void image(int n, Sprite m[], RenderWindow& k)
{
	for (int i = 0; i < n; i++)
		k.draw(m[i]);
}
int main()
{
	//
	Texture walf;
	walf.loadFromFile("date/okko.jpg");
	Sprite wal;
	wal.setTexture(walf);
	wal.setScale(0.85, 0.6);
	//
	Texture wals;
	wals.loadFromFile("date/haa.png");
	Sprite wall;
	wall.setTexture(wals);
	wall.setPosition(300, 95);
	wall.setScale(0.8, 0.8);
	//

	Font yes;
	if (yes.loadFromFile("date/goo.otf") == false)
	{
		cout << "faild" << endl;
	}
	Text no[20];
	no[0].setFont(yes);
	no[0].setString("wellcome to ice tower");
	no[0].setPosition(70, 650);
	no[0].setFillColor(Color::White);
	no[0].setCharacterSize(50);
	//
	no[1].setFont(yes);
	no[1].setString("help harold to climb as high as possible !");
	no[1].setPosition(30, 950);
	no[1].setFillColor(Color::White);
	no[1].setCharacterSize(25);
	//
	no[2].setFont(yes);
	no[2].setString("1 : use arrow to move .");
	no[2].setPosition(30, 1250);
	no[2].setFillColor(Color::White);
	no[2].setCharacterSize(25);
	//
	no[3].setFont(yes);
	no[3].setString("2 : use space to jump .");
	no[3].setPosition(30, 1550);
	no[3].setFillColor(Color::White);
	no[3].setCharacterSize(25);
	//
	no[4].setFont(yes);
	no[4].setString("jump to platform to increase your score .");
	no[4].setPosition(30, 1850);
	no[4].setFillColor(Color::White);
	no[4].setCharacterSize(25);
	//
	no[5].setFont(yes);
	no[5].setString("if harold fall to ground you lose .");
	no[5].setPosition(30, 2150);
	no[5].setFillColor(Color::White);
	no[5].setCharacterSize(25);
	//
	no[6].setFont(yes);
	no[6].setString("are you ready to play !");
	no[6].setPosition(30, 2450);
	no[6].setFillColor(Color::White);
	no[6].setCharacterSize(40);
	//
	no[7].setFont(yes);
	no[7].setString("enter space to open the game");
	no[7].setPosition(30, 2750);
	no[7].setFillColor(Color::White);
	no[7].setCharacterSize(30);

	//
	Texture h;
	h.loadFromFile("date/1.jpg");
	Sprite g;
	g.setTexture(h);
	g.setScale(1.8, 1.8);
	//
	no[19].setFont(yes);
	no[19].setString("     Enter             space ");
	no[19].setPosition(100, 530);
	no[19].setFillColor(Color::White);
	no[19].setCharacterSize(50);
	//
	/* Texture te[6];
	Sprite im[6];
	te[0].loadFromFile("date/ahmed.png");
	im[0].setTexture(te[0]);
	im[0].setScale(0.12, 0.12);
	te[1].loadFromFile("date/sara.png");
	im[1].setTexture(te[1]);
	im[1].setScale(0.12,0.12);
	*/
	//

	int a = 0;
	int s = 0;
	srand(time(0)); //1
	RectangleShape start(Vector2f(800.0f, 600.0f));

	RectangleShape ch(Vector2f(40.0f, 50.0f));

	RectangleShape out(Vector2f(200.0f, 220.0f));
	out.setPosition(599, 10);
	Texture staart;
	Texture small;
	Texture ouut;
	SoundBuffer mm;
	Sound sound;
	sound.setBuffer(mm);



	if (mm.loadFromFile("date/icye.ogg") == false)
		cout << " faild" << endl;
	if (ouut.loadFromFile("date/123.gif") == false)
		cout << " faild" << endl;

	if (small.loadFromFile("date/sm.png") == false)
		cout << " faild" << endl;
	if (staart.loadFromFile("date/go.jpg") == false)
		cout << " faild" << endl;
	start.setTexture(&staart);
	ch.setTexture(&small);
	out.setTexture(&ouut);
	ch.setPosition(460, 310);
	//	if (s>=12)
	{
		sound.play();
	}

	RenderWindow window(VideoMode(800, 600), "Icy tower game ! GEN 41 ");
	mmenu menu(window.getSize().x, window.getSize().y);
	window.setFramerateLimit(50);

	while (window.isOpen())
	{

		Event event;
		while (window.pollEvent(event))
		{

			if (Keyboard::isKeyPressed(Keyboard::Escape))
				window.close();

			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Up)
			{
				menu.MoveUp();
				ch.move(0, -100);

			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Down)
			{
				menu.MoveDown();
				ch.move(0, 100);
			}
			if (event.type == Event::KeyReleased && event.key.code == Keyboard::Return)
			{
				switch (menu.getpreesd())
				{
				case 0:
				{
					sound.pause();
					cout << "start game" << endl;

					RenderWindow window2(VideoMode(800, 600), "Icy tower GEN 41");
					RectangleShape oop(Vector2f(120.0f, 1200.0f));
					oop.setPosition(0, -440);
					RectangleShape wall2(Vector2f(120.0f, 1200));
					wall2.setPosition(680, -590);
					RectangleShape first(Vector2f(580, 100.0f));
					first.setPosition(110, 520);
					RectangleShape re(Vector2f(50.0f, 50.0f));
					re.setPosition(400, 300);

					float dt;
					Clock clock;
					int c = 0;
					Vector2f velocity;
					const float speed = 250.0f;
					Texture texture;
					Texture image;
					Texture side;
					Texture side2;
					Texture low;
					Texture pl;//
					pl.loadFromFile("date/sec.jpg");//
					Sprite pll[1000];//
					for (int i = 0; i < 999; i++)
						pll[i].setTexture(pl);//
					for (int i = 0; i < 999; i++)
						pll[i].scale(0.5, 0.1);
					point plat[1000]; // struct
					int space = 100;

					for (int i = 0; i <= 999; i++)
					{
						plat[i].y = 0;
						plat[i].x = (rand() % 560 + 20);
						plat[i].y += 100 * i - 9000;
					}
					const float gravity = 1.0f;
					int hi = 440;


					if (low.loadFromFile("date/first.jpg") == false) //first
						cout << "gaild" << endl;
					if (side2.loadFromFile("date/wal.jpg") == false) //side
						cout << "gaild" << endl;

					if (side.loadFromFile("date/wal2.jpg") == false) //side
						cout << "gaild" << endl;

					if (texture.loadFromFile("date/vmv.png") == false)  //player
						cout << "gaild" << endl;

					if (image.loadFromFile("date/oop.jpg") == false)   //back
						cout << "gaild" << endl;
					oop.setTexture(&side);
					wall2.setTexture(&side2);
					first.setTexture(&low);
					Sprite background;
					Sprite sprite;
					sprite.setPosition(400, 520 - 60);
					background.setTexture(image);
					sprite.setTexture(texture);
					int x = 0, y = 0;
					background.setScale(1, 1);
					background.setPosition(0, -400);


					window2.setFramerateLimit(60);
					while (window2.isOpen())
					{
						dt = clock.restart().asSeconds();
						Event event;
						while (window2.pollEvent(event))
						{
							if (Keyboard::isKeyPressed(Keyboard::Escape))
								window2.close();

							if (event.type == Event::KeyReleased && event.key.code == Keyboard::Space)
							{
								x = 1;
								y = 0;


							}

						}


						velocity.x = 0.f;
						velocity.y = 0.f;

						/*if (event.type == Event::KeyReleased && event.key.code == Keyboard::Space)
						{
							x = 1;
							y = 0;
							sprite.move(0, 5);
						}

				if (event.type == Event::KeyReleased && event.key.code == Keyboard::Right)
						{
							x = 1;
							y = 0;
							sprite.move(0, 5);
						}
						if (event.type == Event::KeyReleased && event.key.code == Keyboard::Left)
						{
							x = 1;
							y = 0;
							sprite.move(0, 5);
						}*/



						if (Keyboard::isKeyPressed(Keyboard::Up))
						{
							velocity.y += -speed * dt;
							x++;
							y = 0;
							if (sprite.getPosition().y <= 300)
							{
								if (background.getPosition().y >= 0)
								{
									background.setPosition(0, -350);
								}

								background.move(0, 5);

								first.move(0, 5);
								if (wall2.getPosition().y >= -150)
									wall2.setPosition(680, -500);
								wall2.move(0, 5);
								if (oop.getPosition().y >= -150)
									oop.setPosition(0, -500);
								oop.move(0, 5);
								for (int i = 0; i <= 999; i++)
								{


									plat[i].y += 5;
								}

							}
							for (int i = 0; i < 999; i++)
								pll[i].move(velocity);
						}


						if (Keyboard::isKeyPressed(Keyboard::Down))
						{
							velocity.y += speed * dt;
							x++;
							y = 0;
							if (c > 30)
							{
								if (background.getPosition().y <= -250)
								{
									background.setPosition(0, 0);
								}

								background.move(0, -5);
								if (wall2.getPosition().y <= -600)
									wall2.setPosition(680, -150);
								wall2.move(0, -5);
								if (oop.getPosition().y <= -600)
									oop.setPosition(0, -150);
								oop.move(0, -5);
							}




						}
						if (Keyboard::isKeyPressed(Keyboard::Right))
						{
							velocity.x += +speed * dt * 2;
							y = 1;
							x++;



						}
						if (Keyboard::isKeyPressed(Keyboard::Left))
						{
							velocity.x += -speed * dt * 2;
							y = 2;
							x++;

						}
						if (Keyboard::isKeyPressed(Keyboard::Space))
						{
							velocity.y += -speed * dt * 4;
							x = 3;
							y = 0;
							c++;
							cout << c << endl;
							if (sprite.getPosition().y <= 300)
							{
								if (background.getPosition().y >= 0)
								{
									background.setPosition(0, -350);
								}

								background.move(0, 5);

								first.move(0, 5);
								if (wall2.getPosition().y >= -150)
									wall2.setPosition(680, -500);
								wall2.move(0, 5);
								if (oop.getPosition().y >= -150)
									oop.setPosition(0, -500);
								oop.move(0, 5);
								for (int i = 0; i <= 999; i++)
								{


									plat[i].y += 5;
								}


								for (int i = 0; i < 999; i++)
									pll[i].move(velocity);

							}

						}
						if (x < -1)
						{
							x = 0;
						}
						if (y < -1)
						{
							y = 0;
						}

						if (x * 32 >= 256) {
							x = 0;
						}
						if (y * 58 >= 174) {
							y = 0;
						}
						sprite.setTextureRect(IntRect(32 * x, 58 * y, 32, 58));



						// player move stop
						if (sprite.getPosition().x <= 120)
							sprite.setPosition(120, sprite.getPosition().y);
						if (sprite.getPosition().x >= 680 - 32)
							sprite.setPosition(680 - 32, sprite.getPosition().y);
						if (sprite.getPosition().y <= 50)
							sprite.setPosition(sprite.getPosition().x, 50);
						/*	if (c < 30);
							{
								if (sprite.getPosition().y >= 520 - 50)
									sprite.setPosition(sprite.getPosition().x, 520 - 50);
							}*/

						if (sprite.getPosition().y < 2000)
						{
							sprite.move(0, 5);
							//velocity.y += speed*dt * 2;

							if (sprite.getGlobalBounds().intersects(first.getGlobalBounds()))
								sprite.move(0, -5);
						}

						if (first.getPosition().y >= 601)
							first.setPosition(0, 5000);



						sprite.move(velocity);
						for (int i = 0; i < 999; i++)
						{
							if (sprite.getGlobalBounds().intersects(pll[i].getGlobalBounds()))
							{
								sprite.move(0, -5);
								cout << "jksdfkj" << endl;
							}
						}

						if (sprite.getPosition().y >= 600)
						{
							cout << "game over" << endl;

							RenderWindow over(VideoMode(800, 600), "game over");
							Texture game;
							RectangleShape ov(Vector2f(800.0f, 600.0f));

							game.loadFromFile("date/over.jpg");
							ov.setTexture(&game);

							while (over.isOpen())
							{

								Event event;
								while (over.pollEvent(event))
								{
									if (event.type == Event::Closed)
										over.close();
									if (Keyboard::isKeyPressed(Keyboard::Escape))
										over.close();
								}
								over.clear();
								over.draw(ov);

								over.display();
							}


						}
						// moving el bars

						for (int i = 0; i <= 999; i++)
						{
							plat[i].y += 1;

						}




						window2.clear();
						window2.draw(background);
						for (int i = 0; i <= 999; i++)
						{
							pll[i].setPosition(plat[i].x, plat[i].y - 90550);
							window2.draw(pll[i]);

						}
						window2.draw(first);
						window2.draw(oop);
						window2.draw(wall2);
						window2.draw(sprite);


						window2.display();


					}

					break;
				}
				case 1:
				{
					//option

					RenderWindow window1(VideoMode(800, 600), "sfml");
					while (window1.isOpen())
					{

						Event event;
						while (window1.pollEvent(event))
						{
							if (event.type == Event::Closed)
								window1.close();
							if (Keyboard::isKeyPressed(Keyboard::Escape))
								window.close();
						}
						window1.clear();

						window1.display();
					}

					break;
				}
				case 2:
					window.close();
					break;
				}
			}
		}
		if (ch.getPosition().y <= 310)
			ch.setPosition(ch.getPosition().x, 310);
		if (ch.getPosition().y >= 510)
			ch.setPosition(ch.getPosition().x, 510);

		if (no[0].getPosition().y <= 55)
		{
			no[0].setPosition(70, 55);

		}


		if (no[1].getPosition().y <= 150)
		{
			no[1].setPosition(40, 150);
		}


		if (no[2].getPosition().y <= 200)
		{
			no[2].setPosition(60, 200);
		}
		if (no[3].getPosition().y <= 250)
		{
			no[3].setPosition(60, 250);
		}



		if (no[4].getPosition().y <= 300)
		{
			no[4].setPosition(40, 300);
		}



		if (no[5].getPosition().y <= 350)
		{
			no[5].setPosition(40, 350);
		}
		if (no[6].getPosition().y <= 430)
		{
			no[6].setPosition(100, 430);
		}
		if (no[7].getPosition().y <= 530)
		{
			no[7].setPosition(100, 530);

		}





		window.clear();
		if (Keyboard::isKeyPressed(Keyboard::Space))
		{
			a++;
			cout << a << endl;

		}

		window.draw(wal);
		window.draw(wall);
		window.draw(no[19]);

		// how to play
		if (a >= 5)
		{

			window.draw(g);
			text(18, no, window);
			for (int i = 0; i < 18; i++)
				no[i].move(0, -5);

		}
		/*
		if (a >= 12)
		{
			window.draw(g);
			image(6,im, window);

		} 
		*/
		//menu
		if (a >= 20)
		{

			window.draw(start);
			window.draw(ch);
			window.draw(out);
			menu.draw(window);

		}



		window.display();


	}

	return 0;
}
#include "CApp.h"
#include "Baza_Dannih.h"
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <sstream>
#include <windows.h>
#include <winbgim.h>
#include <limits.h>
#include <SFML/Graphics.hpp>

char Colour[3];

using namespace std;

enum ConsoleColor
{
Black = 0,
Blue = 1,
Green = 2,
Cyan = 3,
Red = 4,
Magenta = 5,
Brown = 6,
LightGray = 7,
DarkGray = 8,
LightBlue = 9,
LightGreen = 10,
LightCyan = 11,
LightRed = 12,
LightMagenta = 13,
Yellow = 14,
White = 15
};

void XY(int x, int y)
{
COORD a = { x, y };
HANDLE form = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(form, a);
}
void Color(int text, int background)
{
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void SetColour(char R, char G, char B)
{
Colour[0] = R;
Colour[1] = G;
Colour[2] = B;
}
void menu();
int main();

void animation()
{
    srand( time( NULL ) );
	sf::RenderWindow window(sf::VideoMode(562, 562), "Animation");
	sf::Texture t1;
    t1.loadFromFile("Animation/Animation1.bmp");
    sf::Texture t2;
    t2.loadFromFile("Animation/Animation2.bmp");
    sf::Texture t3;
    t3.loadFromFile("Animation/Animation3.bmp");


    sf::Sprite s;
    sf::Sprite s1;
    sf::Sprite s2;
    s.setTexture(t1);
    s1.setTexture(t2);
    s2.setTexture(t3);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
            if (event.key.code == sf::Keyboard::Escape)
            window.close();
		}
        window.draw(s);
		window.display();
		Sleep(100);
        window.draw(s1);
		window.display();
		Sleep(100);
        window.draw(s2);
		window.display();
		Sleep(100);
	}
menu();
}
void author()
{
system("cls");
XY(50, 1);
Color(0, 15);//цвет букв, задний фон
printf("ОБ АВТОРЕ");
XY(49, 5);
printf("Разработал:");
XY(44, 7);
printf("Студент группы ПИ-182");
XY(47, 9);
printf("Факультета ФИТиКС");
XY(48, 11);
printf("Шкабров Данила");
XY(38, 15);
printf("Нажмите \"Enter\" для выхода в меню");
}
void menu()
{
int n;
int key = 0;//начальное положение ключа
system("cls");
do
{
Color(0, 15);
system("cls");
key = (key + 5) % 5;
XY(47, 3);
printf("КУРСОВАЯ РАБОТА");

if (key == 0)
{
XY(46, 9);
Color(4, 15);
printf("=>База данных<=");
}

else
{
XY(48, 9);
Color(0, 15);
printf("База данных");
}

if (key == 1)
{
XY(48, 11);
Color(4, 15);
printf("=>Покер<=");
}

else
{
XY(50, 11);
Color(0, 15);
printf("Покер");
}

if (key == 3)
{
XY(46, 15);
Color(4, 15);
printf("=>Об авторе<=");
}

else
{
XY(48, 15);
Color(0, 15);
printf("Об авторе");
}

if (key == 2)
{
XY(47, 13);
Color(4, 15);
printf("=>Анимация<=");
}

else
{
XY(49, 13);
Color(0, 15);
printf("Анимация");
}

if (key == 4)
{
XY(48, 17);
Color(4, 15);
printf("=>Выход<=");
}
else
{
XY(50, 17);
Color(0, 15);
printf("Выход");
}
{
n = _getch();
if (n == 80) key++;
if (n == 72) key--;
}
}
while (n != 13);
switch (key)
{
case 0:
{
system("cls");
Baza_Dannih();
_getch();
menu();
break;
}
case 1:
{
system("cls");
CApp game;
game.onExecute();
menu();
break;
}
case 2:
{
system("cls");
animation();
menu();
break;
}
case 3:
{
system("cls");
author();
_getch();
menu();
break;
}
{
}
case 4:
{
system("cls");
exit(1);
menu();
break;
}
}
key = 0;
}
int main(int argc,char** argv)
{
srand( time( NULL ) );
setlocale(LC_ALL, "Russian");
HWND window_header = GetConsoleWindow();
SetWindowPos(window_header, HWND_TOP, 250, 100, 900, 640, NULL);
menu();
return 0;
}

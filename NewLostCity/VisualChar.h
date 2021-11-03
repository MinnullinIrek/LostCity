#pragma once

class Color
{
public:
	int r;
	int g;
	int b;
	Color(int red, int green, int blue);
	Color(const Color &c);
};

class BodyChar
{
public:
	BodyChar(char ch, Color c);
	char symbol;
	Color color;

};

class VisualChar
{
public:
	VisualChar(BodyChar bodyChar, Color bkC);
	VisualChar(char ch, Color c, Color bkC);
	VisualChar(char ch, Color c);
	VisualChar(char ch);
	Color color   = {255,255, 255};
	Color bkColor = {0,0,0};
	char symbol = ' ';
};

/*
Color white(255, 255, 255);
Color black(0, 0, 0);
Color grey(125, 125, 125);
Color red(255, 0, 0);
Color green(0, 255, 0);
Color blue(0, 0, 255);

*/
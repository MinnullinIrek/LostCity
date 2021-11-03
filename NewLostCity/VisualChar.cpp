#include "VisualChar.h"

Color::Color(int red, int green, int blue):
	r(red),
	g(green),
	b(blue)
{

}

Color::Color(const Color &c):
	r(c.r),
	g(c.g),
	b(c.b)
{

}

BodyChar::BodyChar(char ch, Color c):
	symbol(ch),
	color(c)
{

}

VisualChar::VisualChar(BodyChar bodyChar, Color bkC):
	symbol(bodyChar.symbol),
	color(bodyChar.color),
	bkColor(bkC)
{

}

VisualChar::VisualChar(char ch, Color c, Color bkC):
	symbol(ch),
	color(c),
	bkColor(bkC)
{

}

VisualChar::VisualChar(char ch, Color c):
	symbol(ch),
	color(c)
{

}

VisualChar::VisualChar(char ch):
	   symbol(ch)
{

}

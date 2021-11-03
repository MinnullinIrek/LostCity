#pragma once
#include "Header.h"
#include "VisualChar.h"

class Mover;
class Cell;

class Body
{
public:
	virtual BodyChar getBodyChar() = 0;
	virtual Mover *getMover() = 0;
	virtual Cell *getCell() = 0;
	virtual void setCell(Cell *cell) = 0;
};


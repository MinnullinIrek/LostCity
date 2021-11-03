#pragma once
#include "Header.h"
#include "Body.h"
class Mover;
class Cell;


class Unit : public Body
{
	BodyChar bodyChar;
	Mover *mover;
	Cell *currentCell;
public:
	Unit(BodyChar bodyChar);
	BodyChar getBodyChar() override;
	Mover *getMover() override;
	Cell *getCell() override;
	void setCell(Cell *cell) override;
	void setVisual(BodyChar vis);
};


#include "Unit.h"

Unit::Unit(BodyChar bodyChar):
	bodyChar(bodyChar)
{}


BodyChar Unit::getBodyChar()
{
	//throw std::logic_error("The method or operation is not implemented.");
	return bodyChar;
}

void Unit::setVisual(BodyChar vis)
{
	this->bodyChar = vis;
}

Mover* Unit::getMover()
{
	return mover;
}

Cell *Unit::getCell()
{
	return currentCell;
}

void Unit::setCell(Cell *cell_)
{
	currentCell = cell_;
}
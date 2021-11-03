#include "Mover.h"
#include "Cell.h"
#include "Body.h"

Mover::Mover(std::shared_ptr<Body> body_):
	body(body_)
{


}

void Mover::teleport(Cell* cell)
{
	auto currentCell = body->getCell();
	currentCell->setBody(nullptr);
	cell->setBody(body);
	body->setCell(cell);
}

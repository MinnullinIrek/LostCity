#pragma once

#include <memory>
class Body;
class Cell;

class Mover
{
private:
	std::shared_ptr<Body> body;
public:
	Mover(std::shared_ptr<Body> body);
	void teleport(Cell* cell);
};


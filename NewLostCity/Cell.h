#pragma once
#include "Header.h"
#include "VisualChar.h"

class Body;

class Cell
{
private:
	std::shared_ptr<Body> body;
	Color cellColor = {0,0,0};
public:
	Cell();
	~Cell();
	void setBody(std::shared_ptr<Body> body_);
	auto getBody() const;
	auto isFree() const;
	auto isEmpty()  const;
	VisualChar getVisual()  const;
};

int return1();

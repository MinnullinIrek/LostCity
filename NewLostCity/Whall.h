#pragma once
#include "Header.h"
#include "Body.h"

class Whall :public Body
{
	BodyChar bodyChar;
public:
	BodyChar getBodyChar() override;

};


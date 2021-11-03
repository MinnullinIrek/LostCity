#include "Cell.h"
#include "Define.h"
#include "Body.h"
#include "VisualChar.h"



Cell::Cell()
{

}

Cell::~Cell()
{

}

void Cell::setBody(std::shared_ptr<Body> body_)
{
	body = body_;
}

auto Cell::getBody() const
{
	return body;
}

auto Cell::isFree() const
{
	return static_cast<bool>(body);
}

auto Cell::isEmpty() const
{
	return static_cast<bool>(body);
}

VisualChar Cell::getVisual() const
{
	return static_cast<bool>(body) ? VisualChar(body->getBodyChar(), cellColor) : VisualChar(EmptyCellSymbol, {255,255,255}, cellColor);
}
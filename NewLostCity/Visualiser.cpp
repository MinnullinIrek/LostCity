#include "Map.h"
#include "Visualiser.h"
#include "Console.h"
#include "Cell.h"

Visualiser::Visualiser(Console *console_):
	console(console_)
{

}

Visualiser::~Visualiser()
{

}

void Visualiser::setMap(std::shared_ptr<Map> map_)
{
	
	map = map_;
}

void Visualiser::setHero(std::shared_ptr<Body> body_)
{
	body = body_;
}

void Visualiser::showMap()
{
	//console->printRectEx(10, 10, 100, 100, "", "карта");
	const int startx = 4;
	const int starty = 4;


	console->hline(3, 3, 50);
	console->vline(3, 3, 50);
	console->vline(53, 3, 50);
	console->hline(3, 53, 50);

	for (auto i = 0; i < 48; ++i) {
		for (auto j = 0; j < 48; ++j) {
			auto cell = map->getCell(i, j);
			auto vis = cell->getVisual();
			console->putChar(i + startx, j + starty, vis);
		}
	}




}



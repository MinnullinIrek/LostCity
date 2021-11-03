#include "Map.h"

Map::Map(int x, int y):
	cells(),
	x(x),
	y(y)
{
	//cells.hash_function = [](std::pair<int, int> v) { return 1; }
	for (auto i = 0u; i < x; ++i) {
		for (auto j = 0u; j < y; ++j) {
			cells[{i,j}] = std::make_shared<Cell>();
		}
	}	
}

Map::~Map()
{

}

auto Map::getCell(int x, int y) -> std::shared_ptr<Cell>
{
	return cells.at({ x, y });
}

//void Map::init()
//{
//	std::string("%d")

//}
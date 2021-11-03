#pragma once
#include <unordered_map>
#include <utility>
#include "Cell.h"

class pairHash {
public:
	size_t operator()(const std::pair<int, int>& k) const {
		return k.first * 100 + k.second;
	}
};

/*
struct pairEquals : std::binary_function<const std::pair<int, int>&, const std::pair<int, int>&, bool> {
	result_type operator()(first_argument_type lhs, second_argument_type rhs) const
	{
		return (lhs.first == rhs.first) && (lhs.second == rhs.second);
	}
};
*/

class Map
{
private:
	std::unordered_map<std::pair<int, int>, std::shared_ptr<Cell>, pairHash> cells;
	int x = 0;
	int y = 0;
public:
	Map(int x, int y);
	~Map();
	auto getCell(int x, int y) ->std::shared_ptr<Cell>;
	
};

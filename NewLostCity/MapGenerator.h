#pragma once
#include <vector>

class Map;
class Point;
class Room;


class MapGenerator
{
	Map* map = nullptr;
public:
	MapGenerator();

	void Generate(int width, int height);
	
private:
	Room generateWHRoom(int maxWeight, int maxHeight, int &square);
	std::vector<Room> createRooms(int roomCount, int square, int width, int height);
	void relocateRoomsTry(std::vector<Room> && rooms, const int weight, const int height);
	bool isFreePoint(const Room& room, std::vector<int> matrix, int weight);

};


struct Point {
	int x;
	int y;
	Point() :
		x(0),
		y(0)
	{}

	Point(int x_, int y_) :
		x(x_),
		y(y_)
	{}

	Point& operator = (const Point &pt)
	{
		x = pt.x;
		y = pt.y;
		return *this;
	}

};

struct Room
{
	Point pt;
	int weight;
	int height;

	Room() :
		pt(),
		weight(0),
		height(0)
	{}

	Room(Point p, int w, int h) :
		pt(p),
		weight(w),
		height(h)
	{}

	Room& operator = (const Room &room)
	{
		pt = room.pt;
		weight = room.weight;
		height = room.height;
		return *this;
	}
	int square() const; 
};



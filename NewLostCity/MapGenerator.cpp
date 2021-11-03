#include "MapGenerator.h"
#include<algorithm>

#include "Random.h"



MapGenerator::MapGenerator()
{

}

void MapGenerator::Generate(int width, int height)
{
	const auto standartSquare = 10;
	const auto delta = 0.5;
	

	auto square = width * height;

	auto standartRoomCount = square / standartSquare;

	auto roomCount = Random::random.generate(standartRoomCount - standartRoomCount * delta, standartRoomCount + standartRoomCount * delta);

	
	auto rooms = createRooms(roomCount, square, width*delta, height*delta);

	std::sort(std::begin(rooms), std::end(rooms), [](const Room &roomLeft, const Room &roomRight) {return roomLeft.square() < roomRight.square(); });

	relocateRoomsTry(std::move(rooms), width, height);
	

	
}

bool MapGenerator::isFreePoint(const Room& room, std::vector<int> matrix, int weight)
{
	return false;
}

void MapGenerator::relocateRoomsTry(std::vector<Room> && rooms, const int weight, const int height)
{
	std::vector<int> matrix(weight*height) ;

	for (auto &room : rooms)
	{
		room.pt = { Random::random.generate(0, weight - room.weight), Random::random.generate(0, weight - room.height)};
		isFreePoint(room, matrix, weight);
	}
	

}

std::vector<Room> MapGenerator::createRooms(int roomCount, int square, int width, int height)
{
	std::vector<Room> rooms(roomCount);
	auto roomsSquare = 0;
	for (auto i = 0; i < roomCount && square > roomsSquare; ++i) {
		rooms.push_back(generateWHRoom(width, height, roomsSquare));
	}
	return rooms;
}

Room MapGenerator::generateWHRoom(int maxWeight, int maxHeight, int &square)
{
	auto roomWidth = Random::random.generate(1, maxWeight);
	auto roomHeight = Random::random.generate(1, maxHeight);
	square += roomWidth * roomHeight;
	return Room({ 0,0 }, roomWidth, roomHeight);
}

int Room::square() const
{
	return weight*height;
}

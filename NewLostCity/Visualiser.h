#pragma once
#include <memory>

class Map;
class Body;
class Console;

class Visualiser
{

	std::shared_ptr<Map> map;
	std::shared_ptr<Body> body;
	Console* console;
public:
	Visualiser(Console* console);
	~Visualiser();

	void setMap(std::shared_ptr<Map> map);
	void setHero(std::shared_ptr<Body> body);
	void showMap();


};


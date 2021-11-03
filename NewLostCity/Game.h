#pragma once
#include "Header.h"
#include "TextDB.h"

class Console;
class Body;
class Map;
class Visualiser;
class  Dialog;

class Game
{
private:
	std::shared_ptr<Body> hero;
	std::shared_ptr<Map> map;
	std::shared_ptr<TextDB> textDB;
	std::shared_ptr<Dialog> dialog;
	std::shared_ptr<Visualiser> visualiser;

public:
	std::shared_ptr<Console> console;

public:
	Game();
	void start();
	void startMap();


private:
	void setStartDialogue();
	
	
	
};


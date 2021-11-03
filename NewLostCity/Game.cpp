#include "Game.h"

#include <libtcod/console.hpp>

#include "Dialog.h"
#include "Console.h"
#include "Map.h"
#include "Visualiser.h"
#include "Unit.h"


Game::Game():console(new Console),
	textDB(new TextDB),
	dialog(new Dialog),
	map(new Map(100, 100)),
	visualiser(new Visualiser(console.get())),
	hero(new Unit(BodyChar('@', Color(255,255,255))))
{
	//console = std::make_shared<Console>(Console());
}

void Game::startMap()
{
	visualiser->setMap(map);

	map->getCell(0, 0)->setBody(hero);

	visualiser->showMap();

	console->flush();
	TCOD_key_t key = TCODConsole::waitForKeypress(true);
}

void Game::start()
{

// 	TCODConsole::root->putCharEx(3, 3, '@', { 0,250, 0 }, { 250, 0, 0 });
// 	TCODConsole::root->printf(1, 1, "String with a %cred%c word.", TCOD_COLCTRL_1, TCOD_COLCTRL_STOP);
//	TCODConsole::root->printf(2, 2, "String with a %c%c%c%�red%c word.",
//		TCOD_COLCTRL_FORE_RGB, 255, 1, 1/*, TCOD_COLCTRL_BACK_RGB, 1, 1, 1*/, TCOD_COLCTRL_STOP);

//	console->printRectEx(5, 20, 60, 75, textDB->allText["start"], "" );

	console->printRectEx(5, 5, 60, 75, "start   fghfhg asghdajh ayy xczx weqwe sdasd ", "");

//	setStartDialogue();
	
//	console->showDialog(dialog);
	console->flush();

		
	
	

	TCOD_key_t key;
	TCOD_mouse_t mouse;

 	while (!TCODConsole::isWindowClosed()) {

		TCOD_key_t key = TCODConsole::waitForKeypress(true);
		
		if (key.vk == TCODK_UP || key.vk == TCODK_DOWN) {
			auto delta = key.vk == TCODK_UP ? -1 : (key.vk == TCODK_DOWN ? 1 : 0);
			auto cur = dialog->getChoosenAnswer() + delta;

			if (cur >= 0 && cur < dialog->getCurrentReplic()->answers.size()) {
				dialog->setChoosenAnswer(cur);
			}
		}
		else if (key.vk == TCODK_ENTER) {
			dialog->enterAnswer(dialog->getChoosenAnswer());
		}

		console->showDialog(dialog);

		console->flush();
		

		

  		//TCODSystem::waitForEvent(TCOD_EVENT_ANY, &key, &mouse, true);


		// 		//TCODConsole::root->clear();  //������ �������
// 		//TCODConsole::root->setDefaultBackground({250, 250, 250});
// 		//
// 		// ReSharper disable once CppDeprecatedEntity
// 		//TCODConsole::root->rect(00, 0, 40, 40, true, TCOD_BKGND_DEFAULT);
// 		
// 		//TCODLine::init(5, 5, 20, 20);
// 		//printCenter(40, 25, TCOD_BKGND_NONE, "Hello world!");  //������� ������ "Hello World"
// 
// 		//TCOD_console_print
// 			//TCODConsole::root, 40, 40, "%s", "hello world");


 	}
// 	
}



void Game::setStartDialogue()
{
	std::shared_ptr<Replic> replic = std::make_shared<Replic>();
	
	replic->setText("������ 10 ��� ������� � ��� ��� ��� � ���������� ������� ������ ������� ������������ �����. "
		"������� ��� ������, ��������, ������, ����������� �������, ����� ������ � ����� ������."
		"������� ������ �������, ����� � ������ ����. ���������� ��� �������� ����� ���� ����� �� �����."
		"� ����� ������ �� ��� �������� ����������� �����������, ������� ��� �� ������ ������� � ��������� ����������."
		"��������� � ���������� ������������ ������ ������ � ������� �����������. � �������� ���������� ������ ������ ������� �� "
		"����������� ���������� �������. �� ����� ��������, ��������� �������� ���� �� ����������� ����� � ��������������� ��������."
		"� ������ ����� ����� �������� �����, ����� ��� ��� �� ��� �� ������ ������. ���������� �������� ����� ������� ���������� "
		"������������ � ������, �������� �������� ����� ��� � �� ������. ������� ����� ��� �� ����. ��� �� ��?");



	replic->answers.push_back(std::make_shared<Replic>("���������"));
	replic->answers.push_back(std::make_shared<Replic>("��������"));
	replic->answers.push_back(std::make_shared<Replic>("������"));
	replic->answers.push_back(std::make_shared<Replic>("���"));
	replic->answers.push_back(std::make_shared<Replic>("����������"));
	replic->answers.push_back(std::make_shared<Replic>("�������"));
	replic->answers.push_back(std::make_shared<Replic>("���������"));
	replic->answers.push_back(std::make_shared<Replic>("�����������"));


	dialog->setReplic(std::move(replic));

	

	

	
	//replic->answers
	

	
	//dialog->setReplic()

	
}
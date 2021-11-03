#include "Console.h"

#include "Replic.h"
#include "Dialog.h"
#include "VisualChar.h"

Console::Console() : currentConsole(TCODConsole::root)
{
	TCODConsole::setCustomFont("Ruterminal_big_12x12_gs_tc.png", TCOD_FONT_LAYOUT_TCOD | TCOD_FONT_TYPE_GREYSCALE, 32, 32);
	
	//	"Ruterminal_big_12x12_gs_tc.png""Ruterminal_12x12_gs_tc.png"

	TCODConsole::initRoot(80, 80, "Lost City", false);  //Создаем окно

//   	TCODConsole::mapAsciiCodesToFont(0xC0, 32, 0, 5);
//   	TCODConsole::mapAsciiCodesToFont(0xE0, 32, 0, 6);

	TCODConsole::mapAsciiCodesToFont(0xC0, 32, 0, 5);
   	TCODConsole::mapAsciiCodesToFont(0xE0, 32, 0, 6);

// 	TCODConsole::mapAsciiCodesToFont('А', 32, 0, 5);
// 	TCODConsole::mapAsciiCodesToFont('а', 32, 0, 6);
	
	//currentConsole->setDefaultBackground({ 255,255,255 });
	
	TCODConsole::setColorControl(TCOD_COLCTRL_1, TCODColor::green, TCODColor::yellow);
	TCODConsole::setColorControl(TCOD_COLCTRL_2, TCODColor::blue, TCODColor::yellow);
	//TCODConsole::root->setColorControl(TCOD_COLCTRL_1, TCODColor::red, TCODColor::yellow);

}

void Console::show()
{
	currentConsole->printf(10, 10, "%s", "hello");
}

void Console::printf()
{
	//currentConsole->print()
}

void Console::putChar(int x, int y, const VisualChar &visCh)
{
	TCODConsole::root->putCharEx(x, y, visCh.symbol, { visCh.color.r, visCh.color.g, visCh.color.b }, { visCh.bkColor.r, visCh.bkColor.g, visCh.bkColor.b });
	
// 	TCODConsole::root->setCharForeground(10, 10, { 250, 0 ,0 });
// 
// 	TCODConsole::root->setCharBackground(10, 10, { 250,250,60 }, TCOD_BKGND_SET);
// 
// 	TCODConsole::root->setChar(5, 6, '@');
// 	TCODConsole::root->putChar(4, 4, '@', TCOD_BKGND_DEFAULT);
}

void Console::printRectEx(int x, int y, int w, int h, const std::string &text, const std::string &header = "")
{
// 	if (!header.empty()) {
// 		TCODConsole::root->printFrame(x, y, w, h, true, TCOD_BKGND_DEFAULT, "%s", header.c_str());
// 	}
	//TCODConsole::root->getHeightRect(x, y, w, int h, const char *fmt, ...);
	//TCODConsole::root->setColorControl(TCOD_colctrl_t con, const TCODColor &fore, const TCODColor &back)
	

	TCODConsole::root->printRectEx(x, y, w, h, TCOD_BKGND_COLOR_BURN, TCOD_LEFT, text.c_str());
// 	TCOD_bkgnd_flag_t
// 	TCODConsole::root->
}

void Console::hline(int x, int y, int length)
{
	TCODConsole::root->TCODConsole::hline(x, y, length, TCOD_BKGND_DEFAULT);
}

void Console::vline(int x, int y, int height)
{
	TCODConsole::root->TCODConsole::vline(x, y, height, TCOD_BKGND_DEFAULT);
}

void Console::flush()
{
	TCODConsole::flush();
}

void Console::showReplic(std::shared_ptr<Replic> replic, int currentAnswer)
{
	if (replic != nullptr) {
		printRectEx(5, 5, 60, 40, replic->getText(), "");

		hline(1, 40, 80);
		int i = 0;
		for (auto answer : replic->answers) {
			if (currentAnswer != i)
			{
				printRectEx(10, 45 + i, 60, 2, answer->getText(), "");
			}
			else {
				//printRectEx(10, 45 + i, 60, 2, "%c%s%c", TCOD_COLCTRL_2 ,answer->getText(), TCOD_COLCTRL_STOP);
				TCODConsole::root->printRectEx(10, 45 + i, 60, 2, TCOD_BKGND_COLOR_BURN, TCOD_LEFT, "%c%s%c", TCOD_COLCTRL_2, answer->getText().c_str(), TCOD_COLCTRL_STOP);

			}
			i += 1;
		}
	}
}

void Console::showDialog(std::shared_ptr<Dialog> dialog)
{
	showReplic(dialog->getCurrentReplic(), dialog->getChoosenAnswer());
}

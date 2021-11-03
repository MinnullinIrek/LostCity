#pragma once

#include <libtcod.hpp>
#include <memory>

#include "VisualChar.h"

class  Replic;
class Dialog;

class Console
{
	std::shared_ptr<TCODConsole> currentConsole;
public:
	Console();
	void show();
	void printf();
	void putChar(int x, int y, const VisualChar &visCh);
	void printRectEx(int x, int y, int w, int h, const std::string& text, const std::string& header);
	void vline(int x, int y, int height);
	void hline(int x, int y, int length);

	void showReplic(std::shared_ptr<Replic>  replic, int currentAnswer);
	void showDialog(std::shared_ptr<Dialog> dialog);



	void flush();
};


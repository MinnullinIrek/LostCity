// LostCity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Game.h"

#include <iostream>

#include <string>
#include <locale.h>

int main(int argv, char ** argch)
{
	Game game;
	game.startMap();	
}

// 
// int main(int argv, char ** argch)
// {
//     std::cout << "Hello World!\n";
// 	TCOD_Console *console = TCOD_console_new(80, 80);
// 
// 	TCOD_ContextParams params = {};
// 
// 	params.tcod_version = TCOD_COMPILEDVERSION;  // This is required.
// 	params.columns = console->w;  // Derive the window size from the console size.
// 	params.rows = console->h;
// 	//params.sdl_window_flags = SDL_WINDOW_RESIZABLE;
// 	params.vsync = true;
// 	params.argc = 100;  // This allows some user-control of the context.
// 	params.argv = argch;
// 	
// 	//auto out = tcod::new_context(params);
// 	TCOD_Context *out = nullptr;
// 	TCOD_context_new(&params, &out);
// 	
// 	//TCODConsole::initRoot(160, 80, "Lost city");
// 	TCOD_console_init_root(80, 80, "Lost city", false, TCOD_RENDERER_SDL);
// 	TCOD_console_map_ascii_code_to_font('@', 9, 9);
// 
// 	TCOD_color_t colorW = {250, 250, 250};
// 	TCOD_color_t colorB = { 0, 0, 0 };
// 	
// 	TCOD_console_set_default_foreground(console, colorW);
// 
// 	TCOD_console_set_default_background(console, colorB);
// 	TCOD_console_set_background_flag(console, TCOD_BKGND_DEFAULT);
// 	TCOD_console_clear(console);
// //	TCOD_console_put_char(&con, 1, 1, 'c', TCOD_BKGND_DEFAULT);
// 
//  	while (!TCODConsole::root->isWindowClosed()) {
//  
// 		TCOD_console_set_char(console, 10, 10, 'A');
// 		//TCOD_console_set_char_foreground(con, 10, 10, { 100,100,100 });
// 		//TCOD_console_set_char_background(con, 10, 10, { 0,0,0 }, TCOD_BKGND_DEFAULT);
// 
// 		//TCOD_console_rect(con, 1, 1, 50, 50, false, TCOD_BKGND_DARKEN);
// 		//TCOD_console_hline(con, 11, 11, 80, TCOD_BKGND_DARKEN);
// 
// 		//TCOD_console_printf(con, 20, 20, "ssssssssssssssssssssssssssssss");
// 
// 		TCOD_sys_accumulate_console(console);
//  		TCOD_key_t key;
//  		TCOD_mouse_t mouse;
// // 
//  		TCODSystem::waitForEvent(TCOD_EVENT_ANY, &key, &mouse, true);
// // 
//  		TCOD_console_flush();
// // 		
//  	}
// 
// //	TCOD_quit();
// }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

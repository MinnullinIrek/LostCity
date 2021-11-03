#pragma once

#include <string>
#include <unordered_map>

class TextDB
{
public:
	std::unordered_map<std::string, std::string> allText;
public:
	TextDB();
	~TextDB();
};


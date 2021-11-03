#pragma once
#include <random>

class Random
{
	std::mt19937 generator;// gen(time(0));
	
public:

	Random();

	static Random random;

	int generate(int min, int max);


//	std::uniform_int_distribution<> uid(0, 50);
//	std::cout << "My numbers: " << uid(gen) << " " << uid(gen) << std::endl;
};


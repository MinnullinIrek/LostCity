#include "Random.h"
#include <ctime>

Random Random::random;

Random::Random():
	generator(time(0))
{
}

int Random::generate(int min, int max)
{
	std::uniform_int_distribution<int> uid(min, max);
	return uid(generator);
}
#pragma once

#include "Header.h"
#include "Replic.h"

class  Dialog
{
	std::shared_ptr<Replic> replic;
	std::shared_ptr<Replic> currentReplic;
	int choosenAnswerNum = 0;

public:

	void setReplic(std::shared_ptr<Replic> &&newReplic);
	auto getCurrentReplic() const ->  decltype(currentReplic);
	auto setCurrentAnswer(unsigned int current);
	void setChoosenAnswer(int current);
	auto getChoosenAnswer() const -> decltype(choosenAnswerNum);
	auto enterAnswer(unsigned int answerNum)  -> int;
	
};


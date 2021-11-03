#pragma once
#include "Header.h"
#include <vector>

//#include "Answer.h"

class Answer;

class Replic
{
	std::string text;
	
public:
	std::vector<std::shared_ptr<Replic>> answers;
	Replic(std::string replicText);
	

	void setText(std::string &&text);
	Replic();

	auto getText() const -> decltype(text);
	auto getAnswers() const -> decltype(answers);
	
	auto getReplic() ->decltype(answers[0]);
};


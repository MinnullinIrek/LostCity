
#include "Dialog.h"
#include "Replic.h"

void Dialog::setReplic(std::shared_ptr<Replic> &&newReplic)
{
	replic = newReplic;
	currentReplic = replic;
}

auto Dialog::getCurrentReplic() const -> decltype(currentReplic)
{
	return currentReplic;
}

auto Dialog::setCurrentAnswer(unsigned int current)
{
	if (current < currentReplic->answers.size()) {
		currentReplic = currentReplic->answers[current];
	}
}

void Dialog::setChoosenAnswer(int current)
{
	choosenAnswerNum = current;
}

auto Dialog::getChoosenAnswer() const -> decltype(choosenAnswerNum)
{
	return choosenAnswerNum;
}

auto Dialog::enterAnswer(unsigned int answerNum)  -> int
{
	if (answerNum >= 0 && answerNum < replic->answers.size() && !replic->answers[answerNum]->answers.empty()) {
		this->currentReplic = replic->answers[answerNum]->getReplic();
		return 0;
	} else { 
		this->currentReplic = nullptr;
	}
	return 1;
}


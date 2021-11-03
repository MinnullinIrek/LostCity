#include "Replic.h"
void Replic::setText(std::string &&text)
{
	this->text = text;
}

Replic::Replic()
{
	
}

Replic::Replic(std::string replicText) : text(replicText)
{

	
}


auto Replic::getText() const -> decltype(text)
{
	return text;
}

auto Replic::getAnswers() const -> decltype(answers)
{
	return answers;
}

auto Replic::getReplic()  ->decltype(answers[0])
{
	return answers[0];
}
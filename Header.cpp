#include "Header.h"

Word::Word()
{
}

Word::Word(const Word& obj)
{
	word = obj.word;
}

Word* Word::Copy()
{
	return new Word(*this);
}

void Word::choose(vector <Word*>& v)
{
}


Word::~Word()
{}

Title::Title()
{
}

Title::Title(string title_in)
{
	word = title_in;
}

Title* Title::Copy()
{
	return new Title(*this);
}

void Title::choose(vector <Word*> & v)
{
	v.push_back(this->Copy());
}


Title::Title(const Title& obj)
{
	word = obj.word;
}

Title::~Title()
{

}

Uppercase::Uppercase(string uppercase_in)
{
	word = uppercase_in;
}

Uppercase* Uppercase::Copy()
{
	return new Uppercase(*this);
}

void Uppercase::choose(vector <Word*>& v)
{
}


Uppercase::~Uppercase()
{

}
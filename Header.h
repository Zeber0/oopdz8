#pragma once
#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>
#include <typeinfo>
using namespace std;
class Word
{
public:
	string word;
	Word();
	Word(const Word& obj);
	virtual Word* Copy();
	virtual void choose(vector <Word*>& v);
	virtual ~Word();
};

class Title : public Word
{
public:
	Title();
	Title(string title_in);
	Title* Copy() override;
	void choose(vector <Word*> &v) override;
	Title(const Title& obj);
	~Title();
};
class Uppercase : public Word
{
public:
	Uppercase(string uppercase_in);
	Uppercase* Copy() override;
	void choose(vector <Word*>& v) override;
	~Uppercase();
};


#include "Header.h"

using namespace std;

int main()
{
	{
		string title_in, uppercase_in;
		vector <Word*> word;
		vector <Word*> word_2;
		ifstream input("input.txt");
		ofstream output("output.txt");
		
		char c;
		while (input.get(c))
		{
			if (isupper(c))
			{
				title_in = c;
				while (input.get(c) && c != ' ' && c != '\n' && c != ',' && c != '.' && c != '!' && c != '"')
					title_in += c;
				if (title_in != " " && title_in != "\n" && title_in != "," && title_in != "." && title_in != "!" && c != '"')
					word.push_back(new Title(title_in));
			}
			if (islower(c))
			{
				uppercase_in = c;
				while (input.get(c) && c != ' ' && c != '\n' && c != ',' && c != '.' && c != '!' && c != '"')
					uppercase_in += c;
				if (uppercase_in != " " && uppercase_in != "\n" && uppercase_in != "," && uppercase_in != "." && uppercase_in != "!" && c != '"')
					word.push_back(new Uppercase(uppercase_in));
			}
		}
		input.close();
		int l = 0;
		while(l<word.size())
		{
			word[l]->choose(word_2);
			l ++;
		}
		for (int i = 0; i < word_2.size(); i++)
		{
			output << word_2[i]->word<<endl;
		}
		for (int i = 0; i < word.size(); i++)
			delete word[i];
		for (int i = 0; i < word_2.size(); i++)
			delete word_2[i];
		output.close();
	}
	_CrtDumpMemoryLeaks();
	return 0;
}

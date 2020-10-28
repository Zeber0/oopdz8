#include "Header.h"

using namespace std;

int main()
{
	{
		string title_in, uppercase_in;
		vector <Word*> v;
		vector <Word*> v1;
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
					v.push_back(new Title(title_in));
			}
			if (islower(c))
			{
				uppercase_in = c;
				while (input.get(c) && c != ' ' && c != '\n' && c != ',' && c != '.' && c != '!' && c != '"')
					uppercase_in += c;
				if (uppercase_in != " " && uppercase_in != "\n" && uppercase_in != "," && uppercase_in != "." && uppercase_in != "!" && c != '"')
					v.push_back(new Uppercase(uppercase_in));
			}
		}
		input.close();
		int l = 0;
		while(l<v.size())
		{
			v[l]->choose(v1);
			l ++;
		}
		for (int i = 0; i <v1.size(); i++)
		{
			output << v1[i]->word<<endl;
		}
		for (int i = 0; i < v.size(); i++)
			delete v[i];
		for (int i = 0; i < v1.size(); i++)
			delete v1[i];
		output.close();
	}
	_CrtDumpMemoryLeaks();
	return 0;
}

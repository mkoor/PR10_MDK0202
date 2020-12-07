#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	ifstream in("f.txt");
	ofstream out("l.txt");
	int a = 0;
	string s;

	while (in.peek() != EOF)
	{
		getline(in, s);
		for (unsigned int i = 0; i<s.length(); i++)
		{
			if(s[i]=='P') 
			{a++;}
		}
		out << a << endl;
	}
	in.close();
	out.close();
	system("pause");
}


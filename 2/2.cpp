#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	ifstream in("f.txt");
	ofstream out("g.txt");
	char a;
	string s, b;

	while (in.peek() != EOF)
	{
		getline(in, s);
		for (unsigned int i = 0; i<s.length(); i++)
		{
			if(s[i]=='c') b+="c++";
			else b+=s[i];
		}
		out << b << endl;
	}
	in.close();
	out.close();
	system("pause");
}


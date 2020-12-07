#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main()
{
	ifstream in("f.txt");
	ofstream out("g.txt");
	ofstream out2("h.txt");


	int n;
	while (in.peek() != EOF)
	{
		in>>n;
			if (n%2 == 0)
			{
				out << n <<" ";
			}
			else if (n%2 != 0)
			{
				out2 << n <<" ";
			}
			
	}
	in.close();
	out.close();
	out2.close();
	system("pause");
}



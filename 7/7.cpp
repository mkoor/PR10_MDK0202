#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 
int main()
{
	ifstream f("f.txt"); 
	ofstream h("h.txt"); 
	string n; 
	while (f.peek() != EOF) 
	{
		getline(f, n); 
		h << n << endl; 
	}
	f.close();
	h.close();
	ifstream g("g.txt"); 
	ofstream f1("f.txt"); 
	while (g.peek() != EOF) 
	{
		getline(g, n); 
		f1 << n << endl;
	}
	g.close();
	f1.close();
	ifstream h2("h.txt"); 
	ofstream g2("g.txt"); 
	while (h2.peek() != EOF) 
	{
		getline(h2, n); 
		g2 << n << endl; 
	}
	g2.close();
	h2.close();
	system("pause");
}
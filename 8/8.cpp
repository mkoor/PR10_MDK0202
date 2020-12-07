#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream in("f.txt"); 
    ofstream out("g.txt");
    string sym; 
    while (in.peek() != EOF) 
    {
        getline(in, sym); 
        out << endl << sym << endl << "Количество символов в данной строке: " << sym.size() << endl;
    }
    in.close();
    out.close();
    system("pause");
}
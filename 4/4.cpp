#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    ifstream in("f.txt"); 
    string s, ss; 
    while (in.peek() != EOF) 
    {
        getline(in, s); 
        if (s.size() > ss.size()) 
        {
            ss = s; 
        }
    }
    cout << "Длина максимальной строки: " << ss.size() << "\nСтрока:  " << ss << endl;
    in.close();
    system("pause");
}


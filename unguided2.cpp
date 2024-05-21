#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    string input;
    cout << "Masukkan kalimat (minimal 3 kata): ";
    getline(cin, input);
    stack<char> s2311102023;
    for (char c : input)
    {
        s2311102023.push(c);
    }
    string reversed;
    while (!s2311102023.empty())
    {
        char c = s2311102023.top();
        s2311102023.pop();
        reversed += c;
    }
    size_t start = 0;
    size_t end = 0;
    for (size_t i = 0; i < reversed.length(); i++)
    {
        if (reversed[i] == ' ')
        {
            end = i;
            string word = reversed.substr(start, end - start);
            cout << word << ' ';
            start = i + 1;
        }
    }

    string lastWord = reversed.substr(start);
    cout << lastWord << endl;
    return 0;
}
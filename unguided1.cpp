#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool SystemPalindrom2311102023(const string &input)
{
    stack<char> charCharacters;
    for (char c : input)
    {
        charCharacters.push(c);
    }
    for (char c : input)
    {
        if (c != charCharacters.top())
        {
            return false;
        }
        charCharacters.pop();
    }
    return true;
}
int main()
{
    string input;
    cout << "Masukan Kalimat: ";
    getline(cin, input);
    if (SystemPalindrom2311102023(input))
    {
        cout << "Kalimat tersebut adalah Palindrom" << endl;
    }
    else
    {
        cout << "Kalimat tersebut bukan Palindrom" << endl;
    }
    return 0;
}
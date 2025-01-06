#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "command =";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'G')
        {
            cout << 'G';
        }
        if (s[i] == '(' && s[i + 1] == ')')
        {
            cout << 'o';
        }
        if (s[i] == '(' && s[i + 1] == 'a' && s[i + 2] == 'l' && s[i + 3] == ')')
        {
            cout << "al";
        }
    }
    return 0;
}
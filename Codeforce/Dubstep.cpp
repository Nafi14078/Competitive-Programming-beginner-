#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            s[i] = ' ';
            s[i + 1] = ' ';
            s[i + 2] = ' ';
        }
    }
    cout << s << endl;
}
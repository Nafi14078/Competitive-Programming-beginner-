#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        string s;
        cin >> s;
        if (s.size() == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                s[i] = toupper(s[i]);
            }
            cout << s << endl;
        }
    }
}

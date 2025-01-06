#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "s =";
    cin >> s;
    int count1 = 1;
    int count2 = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'A')
        {
            count1++;
        }
        if (s[i] == 'L' && s[i + 1] == 'L')
        {
            count2++;
        }
    }

    if (count1 > 1 || count2 > 2)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
    return 0;
}
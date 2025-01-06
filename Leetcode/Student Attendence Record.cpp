#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "s =";
    cin >> s;
    int count1 = 0;
    int count2 = 2;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            count1++;
        }
        if (s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L')
        {
            count2++;
        }
    }

    if (count1 >= 2 || count2 >= 3)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
    return 0;
}
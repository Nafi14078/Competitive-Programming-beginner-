#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "s=";
    cin >> s;
    int count = 0, f = 0;
    int index;
    for (int i = 0; i < s.size(); i++)
    {
        count = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            index = i;
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << index << endl;
    }
    return 0;
}
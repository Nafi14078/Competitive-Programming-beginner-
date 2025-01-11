#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    string b;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            b = b + '0';
        }
        else
        {
            b = b + '1';
        }
    }
    cout << b << endl;
}
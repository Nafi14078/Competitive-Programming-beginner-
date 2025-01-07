#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count1 = 0;
    int count2 = 0;
    string n1, n2;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'I' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count1 > count2)
    {
        for (int i = 0; i < s.size(); i++)
        {
            n1 = toupper(s[i]);
            cout << n1;
        }
    }
    else if (count1 < count2)
    {
        for (int i = 0; i < s.size(); i++)
        {
            n2 = tolower(s[i]);
            cout << n2;
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            n2 = tolower(s[i]);
            cout << n2;
        }
    }
    return 0;
}
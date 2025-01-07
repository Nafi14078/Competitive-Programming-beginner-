#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    string n1, n2;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        s1[i] = tolower(s1[i]);
        n1 = n1 + s1[i];
    }
    for (int i = 0; i < s2.size(); i++)
    {
        s2[i] = tolower(s2[i]);
        n2 = n2 + s2[i];
    }

    for (int i = 0; i < n1.size(); i++)
    {
        count1 = count1 + int(n1[i]);
    }
    for (int i = 0; i < n2.size(); i++)
    {
        count2 = count2 + int(n2[i]);
    }

    if (count1 == count2)
    {
        cout << "0" << endl;
    }
    else if (count1 > count2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
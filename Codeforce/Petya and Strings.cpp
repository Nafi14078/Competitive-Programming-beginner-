#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    string n1, n2;
    for (int i = 0; i < s1.size(); i++)
    {
        n1 = tolower(s1[i]);
        n2 = tolower(s2[i]);
        if (n1 == n2)
        {
            continue;
        }
        else if (n1 > n2)
        {
            cout << "1" << endl;
            break;
        }
        else
        {
            cout << "-1" << endl;
            break;
        }
    }
    if (n1 == n2)
    {
        cout << "0" << endl;
    }
    return 0;
}

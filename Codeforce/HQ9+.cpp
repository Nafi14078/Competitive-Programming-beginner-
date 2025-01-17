#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin >> p;
    bool found = false;
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            found = true;
        }
        continue;
    }
    if (found == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
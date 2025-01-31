#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a;
        string b = s;
        sort(b.begin(), b.end());
        if (b == s)
        {
            for (int i = b.size() - 1; i >= 0; i--)
            {
                a = a + b[i];
            }
            if (a != s)
            {
                cout << "YES" << endl;
                cout << a << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
            cout << b << endl;
        }
    }
}
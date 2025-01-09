#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if (a[i] == 'p')
            {
                a[i] = 'q';
                b = b + a[i];
            }
            else if (a[i] == 'q')
            {
                a[i] = 'p';
                b = b + a[i];
            }
            else
            {
                b = b + a[i];
            }
        }
        cout << b << endl;
    }
    return 0;
}
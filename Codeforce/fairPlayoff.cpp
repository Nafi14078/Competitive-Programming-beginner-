#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 4;
        int s[n];
        int a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            a = max(s[0], s[1]);
            b = max(s[2], s[3]);
        }
        for (int i = 0; i < n; i++)
        {
            int minindex = i;
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] < s[minindex])
                {
                    minindex = j;
                }
            }
            swap(s[i], s[minindex]);
        }
        for (int i = 0; i < n; i++)
        {
            if ((s[3] == a || s[3] == b) && (s[2] == a || s[2] == b))
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        count++;
    }
    int y = 4 - count;
    cout << y << endl;
}
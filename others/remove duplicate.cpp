#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                while (j < n)
                {
                    a[j] = a[j + 1];
                    j++;
                }
                n--;
            }
            else
            {
                continue;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int sum1 = 0;
    int sum2 = 0;
    int row, col;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    for (int j = 0; j < m; j++)
    {
        sum1 = sum1 + a[row][j];
    }
    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 + a[i][col];
    }

    if (sum1 == sum2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0";
    }

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k, n, w;
    cin >> k >> n >> w;
    long long int sum = 0;
    if (k == 1 && w == 1)
    {
        cout << "0" << endl;
    }
    else
    {
        for (long long int i = 1; i <= w; i++)
        {
            sum = sum + (k * i);
        }
        long long int result = sum - n;
        if (result <= 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b, k = 1, sum1 = 0, sum2 = 0;
        while (k <= 3)
        {
            a = n % 10;
            sum1 = sum1 + a;
            k++;
            n = n / 10;
        }
        k = 1;
        while (k <= 3)
        {

            b = n % 10;
            sum2 = sum2 + b;
            k++;
            n = n / 10;
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
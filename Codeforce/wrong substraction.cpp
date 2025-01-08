#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    while (k > 0)
    {
        int last_digit = n % 10;
        if (last_digit == 0)
        {
            n = n / 10;
            k--;
        }
        else
        {
            n = n - 1;
            k--;
        }
    }
    cout << n << endl;
}
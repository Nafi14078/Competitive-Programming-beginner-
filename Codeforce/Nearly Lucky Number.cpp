#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int count = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        if (last_digit == 4 || last_digit == 7)
        {
            count++;
            n = n / 10;
        }
        else
        {
            n = n / 10;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
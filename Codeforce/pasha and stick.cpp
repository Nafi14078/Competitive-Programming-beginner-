#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0 && n > 5)
    {
        n = n / 2;
        n = n - 1;
        n = n / 2;
        cout << n << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
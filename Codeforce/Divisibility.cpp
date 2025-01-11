#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (a % b != 0)
        {
            cout << b - (a % b) << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}

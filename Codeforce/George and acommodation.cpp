#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count1 = 0;
    int count2 = 0;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if ((p < q) && ((q - p) >= 2))
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count2 == n)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << count1 << endl;
    }
}
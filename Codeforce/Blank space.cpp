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
        int a[n];
        int largest = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {

            if (a[i] == 0)
            {
                count++;
            }
            else
            {
                largest = max(largest, count);
                count = 0;
            }
        }
        largest = max(largest, count);
        if (count == n)
        {
            cout << n << endl;
        }
        else
        {
            cout << largest << endl;
        }
    }
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int index1, index2;
    int count1 = 0, count2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            index1 = i;
            count1++;
        }
        else
        {
            index2 = i;
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << index2 << endl;
    }
    if (count1 < count2)
    {
        cout << index1 << endl;
    }
}
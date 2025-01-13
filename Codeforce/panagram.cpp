#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    string b, a, x, y;
    int count = 0;
    int count1 = 0;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        b = b + (char)tolower(s[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == b[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            a = a + b[i];
        }
        else if (count != 1)
        {
            bool isUnique = true;
            for (int k = 0; k < x.size(); k++)
            {
                if (x[k] == b[i])
                {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique)
            {
                x = x + b[i];
            }
        }

        else
        {
            cout << "undifined" << endl;
        }
    }

    y = x + a;
    for (int i = 0; i < y.size(); i++)
    {
        count1++;
    }
    if (count1 == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
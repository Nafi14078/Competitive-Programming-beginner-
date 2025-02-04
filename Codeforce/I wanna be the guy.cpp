#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    vector<int> v1;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    int q;
    cin >> q;
    vector<int> v2;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    vector<int> v3 = v1;
    v3.insert(v3.end(), v2.begin(), v2.end());

    int m = v3.size();

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m;)
        {
            if (v3[i] == v3[j])
            {
                for (int k = j; k < m - 1; k++)
                {
                    v3[k] = v3[k + 1];
                }
                m--;
            }
            else
            {
                j++;
            }
        }
    }
    if (m == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}
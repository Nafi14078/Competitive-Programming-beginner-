#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string J, S;
        cin >> J;
        cin >> S;
        int count = 0;
        for (int i = 0; i < J.size(); i++)
        {
            if (J[i] == S[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
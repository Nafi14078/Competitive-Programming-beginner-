#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    string S1;
    for (int i = S.size() - 1; i >= 0; i--)
    {
        S1 = S1 + S[i];
    }
    if (S == S1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
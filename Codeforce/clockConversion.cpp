#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a;
        string b, d, e, f;

        for (int i = 0; i < s.size(); i++)
        {
            if ((s[0] == '0' && s[1] != '0') || (s[0] == '1' && s[1] == '1') || (s[0] == '1' && s[1] == '0'))
            {
                cout << s << ' ' << "AM" << endl;
                break;
            }
            else if (s[0] == '1' && s[1] == '2')
            {
                cout << s << ' ' << "PM" << endl;
                break;
            }
            else if (s[0] == '0' && s[1] == '0')
            {
                s[0] = '1';
                s[1] = '2';
                cout << s << ' ' << "AM" << endl;
                break;
            }
            else
            {
                for (int i = 0; i < 2; i++)
                {
                    b = b + s[i];
                }

                a = stoi(b);
                if (a > 12 && a < 22)
                {
                    int c = a - 12;
                    d = to_string(c);
                    e = '0' + d;
                    for (int i = 2; i < s.size(); i++)
                    {
                        f = f + s[i];
                    }
                    cout << e << f << ' ' << "PM" << endl;
                    break;
                }
                if (a >= 22)
                {
                    int c = a - 12;
                    d = to_string(c);
                    e = d;
                    for (int i = 2; i < s.size(); i++)
                    {
                        f = f + s[i];
                    }
                    cout << e << f << ' ' << "PM" << endl;
                    break;
                }
            }
        }
    }
}
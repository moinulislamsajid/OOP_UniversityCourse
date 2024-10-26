#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cin >> sz;

    list<int> l;
    int minval = INT_MAX;

    for (int i = 0; i < sz; ++i)
    {
        int val;
        cin >> val;
        l.push_back(val);
        if (val < minval)
        {
            minval = val;
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int v;
            cin >> v;
            l.push_back(v);
            if (v < minval)
            {
                current_min = v;
            }
            cout << current_min << endl;

        }
        else if (cmd == 1)
        {
            if (!l.empty())
            {
                cout << minval << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }

        }
        else if (cmd == 2)
        {
            if (!l.empty())
            {

                auto it = l.begin();
                while (it != l.end())
                {
                    if (*it == current_min)
                    {
                        it = l.erase(it);
                        break;
                    }
                    else
                    {
                        it++;
                    }
                }

                if (!l.empty())
                {
                    minval = *l.begin();
                    for (int x : l)
                    {
                        if (x < minval)
                        {
                            minval = x;
                        }
                    }
                    cout <<minval<< endl;
                }
                else
                {
                    cout << "Empty" << endl;
                    minval = INT_MAX;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}

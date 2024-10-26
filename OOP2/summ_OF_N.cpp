#include<bits/stdc++.h>
using namespace std;

class Sum
{
private:
    int num;
    int sum;

public:
    void set_Data(int n)
    {
        num = n;
    }

    void cal()
    {
        sum = 0;

        for(int i = 1; i <= num; i++)
        {
            sum += i;
        }
    }

    void display_numbers()
    {
        for(int i = 1; i <= num; i++)
        {
            cout << i;
            if (i < num)
                cout << ",";
        }
        cout << endl;
    }

    void display_sum()
    {
        cout << "Summation Is: " << sum << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    Sum s;
    s.set_Data(n);
    s.cal();
    s.display_numbers();
    s.display_sum();

    return 0;
}

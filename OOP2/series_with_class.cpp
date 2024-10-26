#include<bits/stdc++.h>
using namespace std;

class series
{

private:

    int n,sum;

public:

    void set_data(int num)
    {

        n = num;
    }

    void cal()
    {
        sum = 0;
        for(int i = i; i<=n; i++)
        {

            sum = sum + i;
        }
    }

    void number_print()
    {
        for(int i = 1; i<=n; i++)
        {

            cout<<i<<" ";
        }
    }

    void print_sum()
    {

        cout<<endl;
        cout<<"Sum is : "<<sum;
    }


};

int main()
{

    int n;
    cin>>n;

    series ser;
    ser.set_data(n);
    ser.cal();
    ser.number_print();
    ser.print_sum();

}

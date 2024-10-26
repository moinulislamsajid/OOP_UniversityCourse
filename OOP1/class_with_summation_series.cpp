#include<bits/stdc++.h>
using namespace std;

class sum_series
{

private :

    int num,sum;

public :

    void set_data(int n)
    {
        num = n;
    }
    void cal()
    {
        sum = 0;
        for(int i = 1; i<=num; i++)
        {
            sum = sum + i;
        }
    }

    void print_number()
    {
        for(int i = 1; i<=num; i++)
        {
            cout<<i<<" ";
        }

        cout<<endl;
    }

    void print_sum()
    {
        cout<<"Summation is : "<<sum;
    }
};

int main()

{
    sum_series s;

    int n;
    cout<<"Enter any number : ";
    cin>>n;

    s.set_data(n);
    s.cal();
    s.print_number();
    s.print_sum();



}

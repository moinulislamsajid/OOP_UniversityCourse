#include<bits/stdc++.h>
using namespace std;

class summation_two
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
        for(int i = 0; i<=num; i = i + 2)
        {
            sum = sum + i;
        }
    }

    void print_number()
    {
        for(int i = 0; i<=num; i = i+2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    void print_sum()
    {
        cout<<"Summation is : "<<sum<<endl;
    }

};

int main()
{

    summation_two s;
    int n;
    cin>>n;

    s.set_data(n);
    s.cal();
    s.print_number();
    s.print_sum();


}

#include<bits/stdc++.h>
using namespace std;

class series
{

private :

    int num,sum;

public :

    void setData(int n)
    {
        num = n;
    }

    void calculation()
    {
        sum = 0;
        for(int i = 1; i<=num; i++)
        {
            sum = sum + i;
        }
    }

    void printValue()
    {
        for(int i=1; i<=num; i++)
        {
            cout<<i<<" ";
        }
    }

    void print_result()
    {
        cout<<"\nThe sum is : "<<sum;
    }
};

int main()
{

    int n;
    cout<<"Enter the value what you want : ";
    cin>>n;

    series s;
    s.setData(n);
    s.calculation();
    s.printValue();
    s.print_result();
}

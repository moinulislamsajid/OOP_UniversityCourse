#include<bits/stdc++.h>
using namespace std;

class series

{

private :

    int num;
    int sum;

public :

    void set_Data(int n)
    {
        num = n;
    }

    void cal()
    {
        sum = 0;

        for(int i = 0; i<=num; i++)
        {
            sum = sum + pow(3,i);
        }
    }

    void print_num()
    {

        for(int i = 0; i<=num; i++)
        {
            cout<<pow(3,i)<<" ";
        }

        cout<<endl;
    }

    void display_s()
    {

        cout<<"Summation is : "<<sum;
    }
};

int main()
{

    int n;
    cin>>n;

    series s;
    s.set_Data(n);
    s.cal();
    s.print_num();
    s.display_s();
}

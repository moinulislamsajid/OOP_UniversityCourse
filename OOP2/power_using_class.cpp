#include<bits/stdc++.h>
using namespace std;

class power_sum
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
        for(int i = 0; i<num; i++)
        {
            sum = sum + pow(3,i);
        }
    }

    void print_number()
    {
        for(int i = 0; i<num; i++)
        {
            cout<<pow(3 , i)<<" ";
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
    power_sum p;
    int n;
    cin>>n;

    p.set_data(n);
    p.cal();
    p.print_number();
    p.print_sum();


}

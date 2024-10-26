#include<bits/stdc++.h>
using namespace std;

class power
{

private:

    int sum,n;

public :

    void set_Data(int num)
    {

        n = num;
    }

    void cal()
    {
        sum = 0;
        for(int i  = 0; i<=n; i++)
        {

            sum = sum + pow(3,i);
        }

    }

    void print_num()
    {

        for(int i= 0; i<n; i++)
        {

            cout<<pow(3,i)<<" ";
        }
    }

    void print_Sum()
    {

        cout<<endl;
        cout<<"Sum is : "<<sum;
    }
};


int main()
{

    int n;
    cout<<"Enter the number what do you want : " ;
    cin>>n;

    power po;
    po.set_Data(n);
    po.cal();
    po.print_num();
    po.print_Sum();

}

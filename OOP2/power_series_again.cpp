#include<bits/stdc++.h>
using namespace std;

class power
{

private:

    int num,sum;

public :

    void set_Data(int n)
    {
        num = n;
    }

    void calculation()
    {
        sum = 0;

        for(int i = 0; i<=num; i++)
        {

            sum = sum + pow(3,i);
        }
    }

    void numberPrint()
    {
        for(int i=0; i<=num; i++)
        {

            cout<<pow(3,i)<<" ";
        }
    }

    void printResult()
    {
        cout<<"\nSum of the value : "<<sum;
    }

};

int main()
{
    int n;
    cout<<"Enter the number what to you want : ";
    cin>>n;
    power p;
    p.set_Data(n);
    p.calculation();
    p.numberPrint();
    p.printResult();
}

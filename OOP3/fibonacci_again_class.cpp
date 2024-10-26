#include<bits/stdc++.h>
using namespace std;

class fiboNaccci
{
private :

    int num[100],n;

public :

    fiboNaccci()
    {
        num[0] = 0;
        num[1] = 1;
    }

    void setData(int n)
    {
        this->n = n;
    }

    void calculation()
    {
        for(int i = 2; i<n; i++)
        {
            num[i] = num[i - 1] + num[i - 2];
        }
    }

    void display()
    {
        for(int i=0; i<n; i++)
        {
            cout<<num[i]<<" ";
        }
    }

};

int main()
{

    int n;
    cout<<"Enter any number to find the fibonacci series : ";
    cin>>n;

    fiboNaccci fib;

    fib.setData(n);
    fib.calculation();
    fib.display();

}

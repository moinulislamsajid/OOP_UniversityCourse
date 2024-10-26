#include<bits/stdc++.h>
using namespace std;

class fibo

{
private :

    int number[100];
    int num;

public:

    fibo()
    {

        number[0] = 0;
        number[1] = 1;
    }

    void set_Data(int n)
    {
        num = n;
    }

    void cal()
    {
        for(int i=2; i<num; i++)
        {
            number[i] = number[i-1] + number[i-2];
        }
    }

    void display()
    {

        for(int i = 0; i<num; i++)
        {
            cout<<number[i]<<" ";
        }
    }
};

int main()
{

    int n;
    cout<<"Enter number how many Fibonacci series ";
    cin>>n;

    fibo fib;
    fib.set_Data(n);
    fib.cal();
    fib.display();
}

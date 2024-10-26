#include<bits/stdc++.h>
using namespace std;

class fibo
{

private :

    int number[100],num;

public :

    // create a constructor to initial the value

    fibo()
    {
        number[0] = 0;
        number[1] = 1;
    }

    void input_data(int n)
    {
        num = n;

    }

    void cal()
    {
        for(int i = 2; i<num; i++)
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
    cout<<"Enter any number : ";
    cin>>n;

    fibo fib;
    fib.input_data(n);
    fib.cal();
    fib.display();
}

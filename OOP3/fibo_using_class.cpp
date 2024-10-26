#include<bits/stdc++.h>
using namespace std;

class fibo
{
private:

    int number[100];
    int n;

public:

    // create a constructor to initial the value

    fibo()
    {
        number[0] = 0;
        number[1] = 1;
    }

    void set_data(int value)
    {
        n = value;
    }
    void  calculation()
    {
        for(int i = 2; i<n; i++)
        {
            number[i] = number[i-1] + number[i-2];
        }
    }

    void display()
    {
        for(int i = 0; i<n; i++)
        {
            cout<<number[i]<<" ";
        }
    }

};

int main()
{

    int n;
    cin>>n;

    fibo fb;
    fb.set_data(n);
    fb.calculation();
    fb.display();


}

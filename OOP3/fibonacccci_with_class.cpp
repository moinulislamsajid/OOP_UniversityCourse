#include<bits/stdc++.h>
using namespace std;

class fibo
{

private :

    int number[100],n;

public :

    // create a constructor to initial the value

    fibo()
    {
       number[0] = 0;
       number[1] = 1;

    }

    void calculation(int num)
    {
        n = num;

        for(int i = 2; i<n; i++)
        {

            number[i] = number[i - 1] + number[i - 2];
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
    cout<<"Enter the size you wanted to the Fibonacci series : ";
    cin>>n;


    fibo obj;
    obj.calculation(n);
    obj.display();


}

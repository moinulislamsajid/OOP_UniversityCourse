#include<bits/stdc++.h>
using namespace std;

int fibo(int num)
{

    if(num == 0 || num == 1)
    {
        return num;
    }

    return fibo(num - 1) + fibo(num -2);
}

int main()
{

    int n;
    cout<<"Enter any value to find the Fibonacci series : ";
    cin>>n;
    int i = 0;
    while(i<n)
    {
        cout<<fibo(i)<<" ";
        i++;
    }
}

#include<bits/stdc++.h>
using namespace std;

int rec_fibo(int n)
{

    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    return rec_fibo(n-1) + rec_fibo(n-2);
}


int main()
{

    int n;
    cin>>n;

    int ans = rec_fibo(n);

    cout<<"Fibonacci series : "<<ans;
}

#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==2)
    {
        return 2;
    }
    return n+sum(n - 2);
}

int main()
{
    int n;
    cin>>n;

    int ans = sum(n);
    cout<<"Summation is : "<<ans;
}

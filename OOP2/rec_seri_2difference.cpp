#include<bits/stdc++.h>
using namespace std;

int seri(int n)
{
    if(n == 2)
    {
        return 2;
    }
    return n+seri(n - 2);
}

int main()
{
    int n;
    cin>>n;

    cout<<"Number is : ";
    for(int i= 2; i<=n; i=i+2)
    {
        cout<<i<<" ";
    }

    int ans = seri(n);
    cout<<"\nSum is : "<<ans;
}

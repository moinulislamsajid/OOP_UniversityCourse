#include<bits/stdc++.h>
using namespace std;

int series(int n)
{
    // base case

    if(n==1)
    {
        return 1;
    }
    return n+series(n-1);
}

int main()
{
    int n;
    cin>>n;

    // print the number

    cout<<"Number is : ";
    for(int i = 1; i<=n; i++)
    {
        cout<<i<<" ";
    }

    int ans = series(n);
    cout<<"\nSum is : "<<ans<<endl;
}

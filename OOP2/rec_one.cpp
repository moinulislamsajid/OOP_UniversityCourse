#include<bits/stdc++.h>
using namespace std;

int series(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n+series(n - 1);
}

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    int sum = series(n);
    cout<<"SUM IS : "<<sum<<endl;
}

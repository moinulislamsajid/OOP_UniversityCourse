#include<bits/stdc++.h>
using namespace std;

int seriesTwo(int n)
{
    if(n == 2)
    {
        return 2;
    }

    return n+seriesTwo(n - 2);
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            continue;
        }
        cout<<i<<" ";
    }

    int ans = seriesTwo(n);
    cout<<"\nSum of those values : "<<ans;
}

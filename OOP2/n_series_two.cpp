#include<bits/stdc++.h>
using namespace std;

int series(int n)
{

    if(n == 2)
    {
        return 2;
    }

    return n+series(n-2);
}

int main()

{

    int n;
    cin>>n;

    int ans = series(n);

    cout<<"Answer is : "<<ans<<endl;




}


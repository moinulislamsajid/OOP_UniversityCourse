#include<bits/stdc++.h>

using namespace std;

int fact(int n)
{

    if(n == 0 || n == 1)
    {
        return 1;
    }

    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter any value to find out factorial : ";
    cin>>n;
    int ans = fact(n);
    cout<<"Factorial Value is : "<<ans;

}

#include<bits/stdc++.h>

using namespace std;

    int  fun(int num){

        if(num == 0 || num == 0) return 1;

        return num*fun(num - 1);

    }


int main()

{

    int n;
    cin>>n;

    int ans = fun(n);

    cout<<"Factorial is : "<<ans;

}

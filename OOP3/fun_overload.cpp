#include<bits/stdc++.h>
using namespace std;

class overload

{

private :

    int ans;

public:

    void over()
    {

        cout<<"This is overload function"<<endl;
    }

    void over(int r)
    {
        double res;
        res = 3.1416 * r * r;
    }

    void over(int x, int y)
    {

        ans = x + y;
        cout<<"Answer is : "<<ans<<endl;
    }

    void over(int x, int y, int z)
    {

            ans = x*y*z;
            cout<<"Answer is : "<<ans<<endl;
    }

};

int main()

{

    overload ov;
    ov.over();
    ov.over(2.22);
    ov.over(5,10);
    ov.over(5,10,10);




}

#include<bits/stdc++.h>
using namespace std;

class over_ride
{

    private:

        int num;

    public :
        over_ride()
        {

            num = 10;
        }

        void operator ++()
        {

            num = num + 2;
        }

        void display()
        {
            cout<<"Value is : "<<num;
        }


};


int main()

{


    over_ride ov;

    ++ov;
    ov.display();


}

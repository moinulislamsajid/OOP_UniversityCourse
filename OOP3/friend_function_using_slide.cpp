#include<bits/stdc++.h>

using namespace std;

class Sakib{

 private :

    int roll;

 public :

    Sakib()
    {

        roll = 0;
    }

    friend int print(Sakib b);


};

int print(Sakib v)
{

    v.roll=10;

    return v.roll;
}

int main()

{

    Sakib obj;

    cout<<print(obj);


}

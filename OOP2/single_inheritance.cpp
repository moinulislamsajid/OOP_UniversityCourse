#include<bits/stdc++.h>

using namespace std;

class single_in{


    public :

    void display()

    {

        cout<<"Hello this is single in";
    }


};

class sin_in : public single_in{

public :

    void hello()
    {

        cout<<"THis is derived class";
    }


};


int main()

{

    sin_in ob;

    ob.display();
    ob.hello();

}

#include<bits/stdc++.h>

using namespace std;

class Copy{


private :

    int b,c;

public :

    Copy(){

        b = 20;
        c = 10;

    }

    Copy(Copy& v){

        b = v.b;
        c = v.c;

    }

    void display()

    {

        cout<<"b : "<<b<<"c : "<<c <<endl;
    }


};

int main()

{

    Copy c1;
    c1.display();

    Copy c2(c1);
    c2.display();

}

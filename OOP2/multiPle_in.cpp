#include<bits/stdc++.h>
using namespace std;

class First
{

protected:

    int a;

public :

    void get_a(int n)
    {
        n = a;
    }
};

class second{

protected :

    int k;

public :

    void get_k(int b)
    {
        k = b;
    }


};

class last : public First,public second
{

public :

    void display()
    {
        cout<<"The value is a "<<a<<endl;
        cout<<"The value is k "<<k<<endl;
        cout<<"Addition is : "<<a + k<<endl;
    }


};

 int main()
 {

     last l;
     l.get_a(10);
     l.get_k(20);
     l.display();
 }

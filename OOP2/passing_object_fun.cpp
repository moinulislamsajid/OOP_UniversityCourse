#include<bits/stdc++.h>
using namespace std;

class Passing_object_fun

 {

private :

    int n;

public :

    // create a constructor

    Passing_object_fun(int c): n(c) {}



    // create destructor

    ~Passing_object_fun();

    void set_data(int num)
    {

        n = num;
    }

    int get_data()
    {
        return n;
    }



 };


 void obj_fun(Passing_object_fun ob)
 {

     ob.set_data(22);
     cout<<"This is local : "<<ob.get_data();
 }

 int main()

 {

     Passing_object_fun op(11);

     obj_fun(op);

     cout<<"Main : "<<op.get_data();


 }

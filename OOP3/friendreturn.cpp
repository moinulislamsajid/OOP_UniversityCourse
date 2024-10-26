#include<bits/stdc++.h>
using namespace std;

class frd_fun

{
   private :

       int value;

   public :

        friend int print(frd_fun);

};

int print(frd_fun a)
{

    a.value = 10;
    return a.value;
}


int main()

{

    frd_fun f;

    cout<<print(f);
}

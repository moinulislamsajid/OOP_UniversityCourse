#include<bits/stdc++.h>
using namespace std;

class abs_hello
{

private:

    int a,b;

public :

    void setData(int a, int b)
    {

        this->a = a;
        this->b = b;
    }

    void display()
    {

        cout<<"A : "<<a<<endl<<"B : "<<b;
    }
};

int main()
{

    abs_hello b;
    b.setData(1,2);
    b.display();


}

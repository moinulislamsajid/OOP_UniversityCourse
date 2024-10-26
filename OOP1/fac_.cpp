#include<bits/stdc++.h>
using namespace std;

class Fact
{
private :

    int num;
    int fact;

public :

    void set_Data(int n)
    {
        num = n;
    }

    void cal()
    {
        fact = 1;

        for(int i =1; i<=num; i++)
        {
            fact = fact * i;
        }
    }

    void display()
    {
        cout<<"Factorial is "<<fact;
    }


};

int main()

{

    int n;
    cin>>n;

    Fact fac;
    fac.set_Data(n);
    fac.cal();
    fac.display();

}

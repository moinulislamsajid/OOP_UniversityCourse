#include<bits/stdc++.h>
using namespace std;

class fact
{
private :

    int num,fact1;

public :

    void set_Data(int n)
    {
        num = n;
    }
    void cal()
    {
        fact1 = 1;
        for(int i = 1; i<=num; i++)
        {
            fact1 = fact1 * i;
        }
    }

    void display()
    {
        cout<<"Factorial is : "<<fact1;
    }

};

int main()
{
    fact f;
    int n;
    cin>>n;
    f.set_Data(n);
    f.cal();
    f.display();
}

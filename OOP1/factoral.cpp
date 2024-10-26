#include<bits/stdc++.h>

using namespace std;

class fact_cal
{

private :

    int num,fact =1;

public :

    void setData(int n)
    {

        num = n;
    }

    void cal()

    {
        for(int i = 1; i<=num; i++)

        {

            fact = fact * i;
        }

    }

    void display()

    {

        cout<<"Factorial is : "<<fact;
    }


};


int main()

{

    int n;
    cin>>n;

    fact_cal f;
    f.setData(n);
    f.cal();
    f.display();

}

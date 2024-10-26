#include<bits/stdc++.h>
using namespace std;

class rectange
{

private:

    double length,weight,result;


public :

        void set_Data(double length, double weight)
        {

            this->length = length;
            this->weight = weight;
        }

        void cal()
        {
             result = length * weight;
        }

        void display()
        {
            cout<<"Result is : "<<result;
        }
};

int main()





{


    double n,m;
    cin>>n>>m;

    rectange rec;

    rec.set_Data(n,m);
    rec.cal();
    rec.display();
}

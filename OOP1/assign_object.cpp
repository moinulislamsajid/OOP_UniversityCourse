#include<bits/stdc++.h>
using namespace std;

class hey
{
private:

    int value;

public :

    void setdata(int val)
    {

        value = val;
    }

    int get_data()
    {
        return value;
    }

};

int main()

{

     hey ob,ob1;

     ob.setdata(10);
     ob1 = ob;
     cout<<ob1.get_data();
}

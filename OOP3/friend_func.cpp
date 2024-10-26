#include<bits/stdc++.h>
using namespace std;

class fri
{

private:

    int num;

public :

    // create a constructor to initial the value

    fri()
    {
        num = 0;
    }

    friend int printValue(fri a);

};


int printValue(fri a)
{

    a.num = 10000;
    return a.num;
}

int main()
{

    fri fr;
    cout<<printValue(fr);


}

#include<bits/stdc++.h>
using namespace std;

class useing_frd
{
private :

    int id;
    string name;

public :

    useing_frd(int id, string name)
    {

        this->id = id;
        this->name = name;
    }


    friend class hello_class;
};

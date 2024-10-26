#include<bits/stdc++.h>

using namespace std;


    class Teacher{


    private :

        int id;
        string name;

    public :

        // create a constructor

        Teacher(int id, string name){

                this->id = id;
                this->name = name;

        }

        friend class Hey_friend;



    };


    class Hey_friend{

    public:

        void display(Teacher & t){

            cout<<"Teacher ID : "<<t.id;
            cout<<"\nFavourite Teacher : "<<t.name;

        }
    };



int main(){


    Teacher t1(101,"Alamgir Hossain Sir");
    Hey_friend h1;

    h1.display(t1);



}

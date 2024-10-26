#include<bits/stdc++.h>
using namespace std;

 class encap
 {

 public:

     // create a constructor

     encap(int i = 0)
     {
         total = i;
     }

     void addNumber(int num)
     {
         total+=num;
     }

     int get_total()
     {
         return total;
     };



 private:

    int total;
 };

 int main()
 {

     encap an;

     an.addNumber(10);
     an.addNumber(10);
     an.addNumber(10);

     cout<<"Total value is : "<<an.get_total()<<endl;



 }

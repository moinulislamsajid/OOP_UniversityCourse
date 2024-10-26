 #include<bits/stdc++.h>
 using namespace std;

 class copy_constructor

 {
     private:

        int a,b;

     public :

         copy_constructor()
         {
             a = 20;
             b = 10;
         }
         copy_constructor(copy_constructor &c)
         {
             a = c.a;
             b = c.b;
         }

         void display()
         {
             cout<<"A : "<<a<<"B : "<<b<<endl;
         }
 };

 int main()

 {
     copy_constructor c;

     c.display();

     copy_constructor obj(c);
     obj.display();


 }

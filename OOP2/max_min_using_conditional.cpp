#include<bits/stdc++.h>

using namespace std;

int main()

{

    int x,y,z,lar,mi;
    cin>>x>>y>>z;
    lar = (x>y) ? (x>z ?  x : z) : (y>z  ?  y : z);
    mi =  (x<y) ? (x<z ? x : z) : (y<z  ?  y : z);


    cout<<"Maximum Values : "<<lar<<endl;
    cout<<"Minimum Values : "<<mi;



    }

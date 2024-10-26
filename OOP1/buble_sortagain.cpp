 #include<bits/stdc++.h>
 using namespace std;


 void buble(int num[],int n)
 {

     for(int i = 0; i<n-1; i++)
     {

         for(int j = 0; j<n - i - 1; j++)
         {

             if(num[j] > num[j+1])
             {

                 int temp = num[j];
                 num[j] = num[j+1];
                 num[j+1] = temp;
             }
         }
     }

     // display the value
     cout<<"Sorting Arrays : ";
     for(int i = 0; i<n; i++)
     {
         cout<<num[i]<<" ";
     }
 }

 int main()
 {

     int si;
     cout<<"Enter the size of arrays : ";
     cin>>si;

     int number[si];
     // to get the input

     for(int i=0; i<si; i++)
     {
         cin>>number[i];
     }

     // called the value

     buble(number,si);


 }

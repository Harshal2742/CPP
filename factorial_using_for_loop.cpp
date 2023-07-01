#include<iostream>
using namespace std;



int main()
        {
         int i,n;
         int factorial=1;

         cout<<"enter a number of which you want factorial"<<endl;
         cin>>n;

        for(i=1;i<=n;i++)
           {
               factorial=i*factorial;
           }
        cout<<"factorial of entered number is:"<<factorial;
        return 0;
        }
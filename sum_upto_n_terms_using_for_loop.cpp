#include<iostream>
using namespace std;



int main()
        {
        int i=0;
        int n;
        int sum=0;
        cout<<"enter the value of n "<<endl;
        cin>>n;

        for(i=1;i<=n;i++)
         {
             sum+=i;
         }
         cout<<"sum is:"<<sum;
        return 0;
        }
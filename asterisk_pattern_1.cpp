#include<iostream>
using namespace std;



int main()
        {
         int n;
         int i;
         int j;
         cout<<"Enter the number upto which you want"<<"("<<"*"<<")"<<endl;
         cin>>n;
        for(i=1;i<=n;i++)
          {
              for(j=1;j<=i;j++)
              {
                  cout<<"*";
              }
              cout<<endl;
          }
        return 0;
        }
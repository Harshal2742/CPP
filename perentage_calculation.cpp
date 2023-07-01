#include<iostream>
using namespace std;

float good(float a,float b=5)
      {
      float c=a/b;
      return c;
      }

int main()
    {
     float p,q,r,s,t,u,v;
      cout<<"Enter the marks of 5 subjects below"<<endl;
       cout<<"Enter the marks of M-1"<<endl;
       cin>>p;
       cout<<"Enter the marks of  PHY"<<endl;
       cin>>q;
       cout<<"Enter the marks of  SME"<<endl;
       cin>>r;
       cout<<"Enter the marks of  BEE"<<endl;
       cin>>s;
       cout<<"Enter the marks of  PPS"<<endl;
       cin>>t;

      if(p>100 or q>100 or r>100 or s>100 or t>100)
        {
            cout<<"Worng markes entered";
        }
      else
      {
      u=p+q+r+s+t;
      cout<<"Total of your marks you obtained out of 500 is:"<<endl<<u<<endl;
      cout<<"Your percentage is"<<endl<<good(u)<<endl;
        if(p<35 or q<35 or r<35 or s<35 or t<35)
         cout<<"congratulation you fail";
        else
         cout<<"congratulation you pass";
      }

   return 0;
    }
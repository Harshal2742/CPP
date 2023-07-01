#include<iostream>
using namespace std;

int main()
{ 
  int n;
  int i;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  for(i=1;i<=n;i++)
  {
   if(i%2==0)
   {cout<<i<<" Even number"<<endl;}
   else
   {cout<<i<<" odd number"<<endl;}
  }
   return 0;
}

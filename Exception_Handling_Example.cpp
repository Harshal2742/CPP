#include<iostream>
using namespace std;

float divider(float n,float m)
{
 if(n==0)
 {
  throw invalid_argument("zero divided by any number is zero");
 }
 else if(m==0)
 {
  throw invalid_argument("any number divided by zero is infinite");
 }
 else
 {
    return n/m;
 }
 
}


int main()
        {
        float a,b,f;
        cin>>a>>b;
        try{
          f=divider(a,b);
          cout<<f<<endl;
        }
        catch(invalid_argument e){
            cout<<e.what()<<endl;
        }
        return 0;
        }
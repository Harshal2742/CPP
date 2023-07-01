#include<iostream>
using namespace std;

int pro(int x,int y);
char hii();

int main()
    {
        int a,b;
        cout<<"enter a first number:"<<endl;
        cin>>a;
        cout<<"enter a second number:"<<endl;
        cin>>b;
        cout<<"product of numbers is:"<<pro(a,b)<<endl;
        hii();
        return 0;
    }

int pro(int x,int y)
     {
        int z=x*y;
        return z; 
     }
char hii()
     {
         cout<<"PUBG MOBILE INDIA COMMING SOON";
         return 0;
     }
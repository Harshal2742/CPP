#include<iostream>
using namespace std;

int fun(int a,int b)                  //a and b are formal parameters
       {             
        int c=a+b;    
        return c;
       }
      
      
int main()
       {
        int num1,num2;
        cout<<"Enter first number:"<<endl;
        cin>>num1;
        cout<<"Enter first number:"<<endl;
        cin>>num2;
        cout<<"sum of numbers is:"<<fun(num1,num2);//now num1 and num2 are actual parameters
        return 0;
       }

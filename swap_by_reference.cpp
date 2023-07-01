#include<iostream>
using namespace std;

void  swapbyreference(int &a,int &b)
     {
        int temp=a;
               a=b;
               b=temp;

     }
int main()
    {
        int num1,num2;
        cout<<"Enter a first number:"<<endl;
        cin>>num1;
        cout<<"Enter a second number:"<<endl;
        cin>>num2;
        cout<<"Entered numbers are "<<num1<<" and "<<num2<<endl;

        swapbyreference(num1,num2);
        cout<<"swaped numbers are "<<num1<<" and "<<num2;

       return 0;

    }
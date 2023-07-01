#include<iostream>
using namespace std;

int fibonacci(int n)
     {
      if(n<=2)
        {
            return 1;
        }
     return fibonacci(n-1)+fibonacci(n-2) ;   
     }

int main()
        {
            int a;
            cout<<"Enter a number:"<<endl;
            cin>>a;

            cout<<"The fibonacci of "<<a<<" is:"<<fibonacci(a);
        
        return 0;
        }
#include<iostream>
using namespace std;



int main()
        {
         long long a;

          cout<<"Enter registered mobile number"<<endl;
          cin>>a;
          while (a<=1000000000 || a>=9999999999 || a!=8412836171)
            {
             cout<<"Entered wrong moblie number"<<endl;
             cin>>a;
            }
          if(a==8412836171)
            {
             cout<<"Your mobile number is verified"<<endl;
            }
        return 0;
        }
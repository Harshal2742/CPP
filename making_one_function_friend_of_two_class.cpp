#include<iostream>
using namespace std;

class second;

class first
      {
          int a;
          friend int add(first,second); //for making one function friend of two class declaration like as  
                                        //friend functiontype function
          public:
           void setvalue(int a1)
                {
                    a=a1;
                }

           void getvalue()
                {
                 cout<<"The value of a is "<<a<<endl;
                }
      };

class second
      {
          int b;
          friend int add(first,second);//for making one function friend of two class declaration like as  
                                        //friend functiontype function
                                        
          public:
           void setvalue(int b1)
                {
                    b=b1;
                }

           void getvalue()
                {
                 cout<<"The value of b is "<<b<<endl;
                 
                }
      };

int add(first o1,second o2)
    {
     return o1.a+o2.b;
    }

int main()
        {
         first x;
         x.setvalue(12);
         x.getvalue();

         second y;
         y.setvalue(8);
         y.getvalue();

        cout<<"sum of value of a and b is "<<add(x,y);
        return 0;
        }
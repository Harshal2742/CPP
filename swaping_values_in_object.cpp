#include<iostream>
using namespace std;

class second;

class first
      {
          int a;
          friend void swap(first &,second &); //for making one function friend of two class declaration like as  
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

           void swapedvalue()
                {
                 cout<<"The value of a by swap is "<<a<<endl;
                }
      };

class second
      {
          int b;
          friend void swap(first &,second &);//for making one function friend of two class declaration like as  
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

           void swapedvalue()
                {
                 cout<<"The value of b by swap is "<<b<<endl; 
                }
      };

void swap(first &o1,second &o2)
    {
     int temp = o1.a;
         o1.a = o2.b;
         o2.b = temp;
    }

int main()
        {
         first x;
         x.setvalue(100);
         x.getvalue();

         second y;
         y.setvalue(200);
         y.getvalue();

         swap(x,y);
         x.swapedvalue();
         y.swapedvalue();

        return 0;
        }
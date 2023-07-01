#include<iostream>
using namespace std;

class num1
      {
         int a;

        public :
         int b;

         void setnum();
         int getnum1();
         int getnum2();

      };

void num1 :: setnum(void)
      {
       a=10;
       b=20;
      }
      
int num1 :: getnum1(void)
      {
       return a;
      }

int num1 :: getnum2(void)
      {
       return b;
      }

class num2 : public num1
     {
        int c;
        
        public :
         int getmultiply();
         void display();
     };

int num2 :: getmultiply()
     {
      return c=getnum1()*b;
     }

void num2 :: display()
     {
      
      cout<<"The number 1 is "<<getnum1()<<endl;
      cout<<"The number 2 is "<<b<<endl;
      cout<<"The number 3 is "<<c<<endl;
      
     }

     
int main()
        {
         num2 q1;
         q1.setnum();
         q1.getmultiply();
         q1.display();
        
        return 0;
        }
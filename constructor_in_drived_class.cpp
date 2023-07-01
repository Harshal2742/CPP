#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class num1
     {
      int a;
    
      public :
          num1(int a1)
              {
              a=a1;
              }

          void display1(void)
              {
                cout<<"The first number is "<<a<<endl;
                cout<<"The base class num1 constructor is called."<<endl;
              }
     };

class num2
     {
      int b;
    
      public :
          num2(int b1)
              {
              b=b1;
              }

          void display2(void)
              {
                cout<<"The second number is "<<b<<endl;
                cout<<"The base class num2 constructor is called."<<endl;
              }
     };

class drived : public num1,public num2
     {
      int c;
       
      public :
           drived(int a1,int b1,int c1) : num1(a1),num2(b1)
              {
              c=c1;
              }

           void display3(void)
              {
                display1();
                display2();
                cout<<"The third number is "<<c<<endl;
                cout<<"The drived class constructor is called"<<endl;
              }
     };

int main()
        {
         drived d1(23,45,56);
         d1.display3();
        return 0;
        }
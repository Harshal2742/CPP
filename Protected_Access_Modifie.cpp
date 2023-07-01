#include<iostream>
using namespace std;

class num1
      {
       private :
          int a=10;
       protected :
          int b=20;
       public :
          int c=30;
      };

/*

1.protected mode is intermediate between private and public
2.protected members are inheritable  but can not directly accessible i.e. we can not do like objectname.protected variable or function

                 private derivative  protected derivative  public derivative
private member     not inheritable    not inheritable       not inheritable
protected member   private            protected              protected
public member      private            protected              public

note: in public derivative every thing remains same i.e.protected as protected and public as public
*/

class num2 : public num1
    {
    protected :
     int d=40;
    public :
     int e=50;
    };


int main()
        {
        num1 o1;
         //cout<<"The numeber is "<<o1.a<<endl; //throw error because a is private
         //cout<<"The numeber is "<<o1.b<<endl; //throw error because b is protected
         cout<<"The numeber is "<<o1.c<<endl;

        num2 o2;
        //cout<<"The numeber is "<<o2.a<<endl; //throw error because a is private and not inheritable
        //cout<<"The numeber is "<<o2.b<<endl; //throw error because b is protected
        cout<<"The numeber is "<<o2.c<<endl;
        //cout<<"The numeber is "<<o2.d<<endl;//throw error because d is protected
        cout<<"The numeber is "<<o2.e<<endl;

        
        return 0;
        }
#include<iostream>
using namespace std;

class InOut;

class calculator
    {
     public :
     int u,v;
 
     int sumLength(InOut,InOut);
     int sumBreadth(InOut,InOut);
     int AreaBySum(InOut,InOut);
    
    };

class InOut
    {
     int l,b;
    
     public:
        /* friend int calculator :: sumLength(InOut,InOut);
           friend int calculator :: sumBreadth(InOut,InOut);------->instead of this we can make class as friend
           friend int calculator :: AreaBySum(InOut,InOut); */      

         friend class calculator;

         void setLB(int l1,int b1)
              {
                  l=l1;
                  b=b1;
              }
         void getLB()
              {
                cout<<"Entered Length "<<l<<" and breadth is "<<b<<endl;
              }
    };

    int calculator :: sumLength(InOut x,InOut y)
         {
             return (x.l+y.l);
         }
    int calculator :: sumBreadth(InOut x,InOut y)
         {
           
             return (x.b+y.b);
         }
    int calculator :: AreaBySum(InOut x,InOut y)
         {
          return ((x.l+y.l)*(x.b+y.b));
         }

int main()
        {
         InOut O1,O2;
         O1.setLB(10,20);
         O1.getLB();

         O2.setLB(5,10);
         O2.getLB();

         calculator C1;
         int a=C1.sumLength(O1,O2);
         cout<<"The sum of Length is "<<a<<endl;

         int b=C1.sumBreadth(O1,O2);
         cout<<"The sum of braedth is "<<b<<endl;

         int c=C1.AreaBySum(O1,O2);
         cout<<"The area by sum is "<<c;
         
    
        return 0;
        }
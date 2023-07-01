#include<iostream>
using namespace std;

class point
      {
          int x,y;

          public:
             point(int a,int b);//it is a parameterized constructor as it take paramerets

             void display(void)
                  {
                      cout<<"The x and y co-ordinates are "<<x<<" and "<<y<<" respectively."<<endl;
                  }
      };

point :: point(int a,int b)
               {
                x=a;
                y=b;   
               }

int main()
        {
         //implicate call to constructor 
         point u(4,8);
         u.display();
        
         //explicate call to constructor 
         point v = point(5,10);
         v.display();

         return 0;
        }
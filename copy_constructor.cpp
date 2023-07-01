#include<iostream>
#include<iomanip>
using namespace std;

class Id
      {
         int a;

         public :
            Id()
              {
                 a=0;
              }
            Id(int x)
               {
                  a=x;
               }
            //if there is no copy constructor found,compiler supplies its own copy constructor
            Id(Id &o1)
               {
                  cout<<"***copy constructor called***"<<endl;    
                  a=o1.a;
               }

            void display()
               {
                cout<<"The Id is "<<a<<endl;
               }
            
      };



int main()
        {

         Id q1(100),q2;
         q1.display();
         q2.display();

         Id q3(q1);   //copy constructor can also called by this way
         q3.display(); 

         Id q4=q3;   //copy constructor can also called by this way
         q4.display();

         return 0;
        }
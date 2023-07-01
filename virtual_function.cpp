#include<iostream>
using namespace std;

class base
{
public :
int a=10;

virtual void display(void)
  {
   cout<<"Good Morning,today's date is "<<a<<endl;
  }
};

class drived : public base
{
public :
int b=18;
 void display(void)
  {
   cout<<"Good Evening,today's date is "<<b<<endl;
  }
};
/* NOTE:- If pointer of base class pointing to drived class object and 
we want to run drived class functon of same name as in base class then
virtual fuction is used.In this method we make base class function as 
virtual */ 
int main()
        {
         base* ptr_base;
         drived obj_drived;
         ptr_base=&obj_drived;
         ptr_base->display();
         
         return 0;
        }
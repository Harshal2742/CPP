#include<iostream>
using namespace std;

class as
{
int a;

public :
    void setData(int a)
        {
/* this is a keyword which is a pointer which points
 to the object which invokes the member function 
 The this pointer holds the address of current object*/
        this->a=a;
        }

   void getData(void)
       {
       cout<<"The value of a is "<<a<<endl;
       }
};

int main()
        {

         as q1;
         q1.setData(45);
         q1.getData();
         
         return 0;
        }
#include<iostream>
using namespace std;

class numbers
{
int num1,num2;

public :
  void setdata(int a,int b)
      {
       num1=a;
       num2=b;
      }

  void getdata(void)
      {
       cout<<"The 1st number is "<<num1<<endl;
       cout<<"The 2nd number is "<<num2<<endl;
      }

};

int main()
        {
     
     /* numbers q1;
        q1.setdata(23,65);
        q1.getdata(); */

    /*  numbers q1;
        numbers* ptr=&q1;
        (*ptr).setdata(34,56);
        (*ptr).getdata(); */
    
    /*  numbers* ptr=new numbers;//here new keyword creats new object
        (*ptr).setdata(34,56);
        (*ptr).getdata();
        return 0; */

    /* arrow oprator is uesed to dereference and it is same as *ptr */
      numbers* ptr=new numbers;
        ptr->setdata(34,56);
        ptr->getdata();
        return 0;
        }
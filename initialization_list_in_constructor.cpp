#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};

*/

class number
{ 
  int x;
  int y;
  
  public :
     //number(int i,int j): x(i),y(j)
     //number(int i,int j): x(i),y(j+i)
     //number(int i,int j): x(i),y(j*2)
     //number(int i,int j): x(i),y(i-j)
     //number(int i,int j): x(i+j),y(j)
     //number(int i,int j): x(y+i),y(j)--> through garbage value because
     //x intilize first as it is declaered first
       number(int i,int j): x(i),y(j)
           {
             cout<<"Hello,Good Morning"<<endl;
             cout<<"The value of x is "<<x<<endl;
             cout<<"The square of y is "<<y<<endl;
           }
};

int main()
        {
        number n1(200,400);
        return 0;
        }
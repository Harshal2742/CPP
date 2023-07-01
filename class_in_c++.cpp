#include<iostream>
#include<string>
using namespace std;

class gym
     {
     private:
        int b,c,d;
     public:
        string a;
        char e;
       void  setdata(int b1,int c1,int d1); //function declared in class which is called method
       void  getdata()//void function means empty function which does not return any value
          {
              cout<<"Member name:"<<a<<endl;
              cout<<"Weight in kg:"<<b<<endl;
              cout<<"Protein required in grame:"<<c<<endl;
              cout<<"Energy required in calories:"<<d<<endl;
              cout<<"Blood group:"<<e<<endl;
          }
     };

void gym :: setdata(int b1,int c1,int d1)
      {
       b=b1;
       c=c1;
       d=d1;
      }

int main()
        {
            gym Hanerry;      //here hanerry is object of gym class
            //  Hanerry.b=35;    show error because b is private
             Hanerry.setdata(68,110,2800);//accessing attribute in class and set value to them
             Hanerry.a="Hanerry  swap";
             Hanerry.e='B';
             Hanerry.getdata();
            

        return 0;
        }
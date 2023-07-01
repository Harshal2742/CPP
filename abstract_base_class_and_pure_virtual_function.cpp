#include<iostream>
#include<cstring>
using namespace std;

class OnePlus
{
protected :
int processor;
int dis;
float rating;

public :
   OnePlus(int p,int d,float r)
        {
          processor=p;
          dis=d;
          rating=r;
        }

    virtual void display()= 0;//do nothing function-->pure virtual fuction
};

class Nord : public OnePlus
{

string name;
string charg="Wired";

public:
    Nord(int p,int d,float r,string n) : OnePlus(p,d,r)
    {
     name=n;
    }
  
    void display(void)
    {
     cout<<"The smartphone name :"<<name<<endl;
     cout<<"Processor : Snapdragon "<<processor<<endl;
     cout<<"Display refresh rate :"<<dis<<"Hz Fluid AMOLED"<<endl;
     cout<<"Charging type :"<<charg<<endl;
     cout<<"Rating :"<<rating<<"/10"<<endl;
    }
};

class series : public OnePlus
{

string name;
string charg="Wireless";

public:
    series(int p,int d,float r,string n) : OnePlus(p,d,r)
    {
     name=n;
    }
  
    void display(void)
    {
     cout<<"The smartphone name :"<<name<<endl;
     cout<<"Processor : Snapdragon "<<processor<<endl;
     cout<<"Display refresh rate :"<<dis<<"Hz Fluid AMOLED"<<endl;
     cout<<"Charging type :"<<charg<<endl;
     cout<<"Rating :"<<rating<<"/10"<<endl;
    }
};

int main()
        {
        Nord N1(750,90,9.5,"Nord CE");
        series OP9(888,120,9.0,"OnePluse 9 Pro");

        OnePlus* ptr_OnePlus[2];
        ptr_OnePlus[0]=&N1;
        ptr_OnePlus[1]=&OP9;
        
        ptr_OnePlus[0]->display();
        ptr_OnePlus[1]->display();
        return 0;
        }


/* Abstract base class is a class that has at least one pure virtual 
function in its body.The classes which are inheriting the base class 
must need to override the pure virtual function  of  the  abstract  
class otherwise compiler will throw an error.
  Abstract class might not have any object.

Pure virtual function is a function that doesn’t perform any operation
and the function is declared by assigning the value 0 to it.Pure 
virtual functions are declared in abstract classes. */
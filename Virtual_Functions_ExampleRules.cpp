#include <iostream>
#include <cstring>
using namespace std;

class OnePlus
{
protected:
  int processor;
  int dis;
  float rating;

public:
  OnePlus(int p, int d, float r)
  {
    processor = p;
    dis = d;
    rating = r;
  }

  virtual void display() {}
};

class Nord : public OnePlus
{

  string name;
  string charg = "Wired";

public:
  Nord(int p, int d, float r, string n) : OnePlus(p, d, r)
  {
    name = n;
  }

  void display(void)
  {
    cout << "The smartphone name :" << name << endl;
    cout << "Processor : Snapdragon" << processor << endl;
    cout << "Display refresh rate :" << dis << "Hz Fluid AMOLED" << endl;
    cout << "Charging type :" << charg << endl;
    cout << "Rating :" << rating << "/10" << endl;
  }
};

class series : public OnePlus
{

  string name;
  string charg = "Wireless";

public:
  series(int p, int d, float r, string n) : OnePlus(p, d, r)
  {
    name = n;
  }

  void display(void)
  {
    cout << "The smartphone name :" << name << endl;
    cout << "Processor : Snapdragon " << processor << endl;
    cout << "Display refresh rate :" << dis << "Hz Fluid AMOLED" << endl;
    cout << "Charging type :" << charg << endl;
    cout << "Rating :" << rating << "/10" << endl;
  }
};

int main()
{

  Nord N1(750, 90, 9.5, "Nord CE");
  series OP9(888, 120, 9.0, "OnePluse 9 Pro");

  OnePlus *ptr_OnePlus[2];
  ptr_OnePlus[0] = &N1;
  ptr_OnePlus[1] = &OP9;

  ptr_OnePlus[0]->display();
  ptr_OnePlus[1]->display();
  return 0;
}

/* 1.They cannot be static
   2.They are accessed by object pointers
   3.Virtual functions can be a friend of another class
   4.A virtual function in the base class might not be used.
   5.If a virtual function is defined in a base class, there is
     no necessity of redefining it in the derived class
     (i.e. if there is no function defined in drived class then
       the base class virtual fuction executed) */
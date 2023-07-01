#include <iostream>
using namespace std;

class base
{
public:
     int a;

     void display(void)
     {
          cout << "The base class variable a = " << a << endl;
     }
};

class drived : public base
{
public:
     int b, c;

     void display(void)
     {
          cout << "The base class variable a = " << a << endl;
          cout << "The drived class variable b = " << b << endl;
          cout << "The drived class variable c = " << c << endl;
     }
};

int main()
{
     base *base_ptr;
     drived obj_drived1;
     base_ptr = &obj_drived1; //Pointing base class pointer to derived class object
     base_ptr->a = 1000;
     //base_ptr->b=2000; // Will throw an error
     //we have to do type casting of pointer
     static_cast<drived *>(base_ptr)->b = 2000;
     static_cast<drived *>(base_ptr)->c = 3000;
     static_cast<drived *>(base_ptr)->display();

     /*drived obj_drived2;
     drived *drived_ptr;
     drived_ptr = &obj_drived2;
     drived_ptr->a = 2000;
     drived_ptr->b = 3000;
     drived_ptr->display(); */

     return 0;
}
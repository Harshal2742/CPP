#include <iostream>
using namespace std;

class base
{
public:
     void statement()
     {
          cout << "PLAYER'S UNKNOWN BATTLEGROUND-->(PUBG)" << endl;
     }
};

class derived : public base
{
public:
     //if we created function with same name as in base class the the base class function get override
     void statement()
     {
          cout << "BATTLEGROUND MOBILE INDIA-->(BGMI)" << endl;
     }
};

int main()
{
     derived p1;
     p1.statement(); //this will execute drived class function

     /*if we want to execute base class function which has same name as 
in drived class we can call it in following way 
 syntax :  object.baseclassname :: functionname()*/
     p1.base::statement();

     return 0;
}
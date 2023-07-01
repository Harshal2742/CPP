#include <iostream>
using namespace std;

class a1
{
    int p;
    char c;

public:
    a1 &setRoll(int p) //It returns the address
    {
        this->p = p;
        return *this; //we derefer this as it store address of current object
    }

    a1 &setDiv(int c)
    {
        this->c = c;
        return *this;
    }

    void getData(void)
    {
        cout << "The roll number is " << p << endl;
        cout << "The division is " << c;
    }
};

int main()
{
    a1 s1;
    //by using this pointer we can create function calling chain
    s1.setRoll(35).setDiv('E').getData();
    /* this is a keyword which is a pointer which points
 to the object which invokes the member function 
 The this pointer holds the address of current object*/
    return 0;
}
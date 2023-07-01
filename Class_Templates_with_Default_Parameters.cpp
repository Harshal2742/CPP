#include <iostream>
#include<string>
using namespace std;

template <class T1=string, class T2=int, class T3=int>
class student
{
public:
    T1 roll;
    T2 div;
    T3 marks;

    student(T1 a, T2 b, T3 c)
    {
        roll = a;
        div = b;
        marks = c;
    }

    void display(void)
    {
        cout << "ID :" << roll << endl;
        cout << "Division :" << div << endl;
        cout << "Percentage :" << marks << endl;
    }
};

int main()
{
    student<int,char,float> s1(103026,'D',78.56);
    s1.display();
    student<> s2("DF3829",103026,78.56);
    s2.display();
    return 0;
}
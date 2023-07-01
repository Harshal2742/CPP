#include <iostream>
using namespace std;

/*
template<class T1, class T2>
class nameOfClass{
    //body
}
*/
template <class T1, class T2>
class product
{
public:
    T1 num1;
    T2 num2;
    product(T1 a, T2 b)
    {
        num1 = a;
        num2 = b;
    }

    void display(void)
    {
        cout << "The product is " << num1 * num2 << endl;
    }
};

int main()
{
    product<int, float> p1(34, 5.3445);
    p1.display();
    return 0;
}
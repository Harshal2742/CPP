#include <iostream>
using namespace std;

template <class T>
class num
{
public:
    T a;
    T b;

    num(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    void display();
};

template <class T>
void num<T>::display()
{
    cout << "The value of a " << a << endl
         << "The value of b " << b << endl;
}

int main()
{
    num<char> n1('F', 'H');
    n1.display();
    return 0;
}
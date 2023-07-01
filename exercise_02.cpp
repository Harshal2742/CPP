#include <iostream>
using namespace std;

class arithmetic
{
private:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
    }

    void sum()
    {
        cout << "sum is " << a + b << endl;
    }

    void substract()
    {
        cout << "substraction is " << a - b << endl;
    }

    void product()
    {
        cout << "product is " << a * b << endl;
    }

    void division()
    {
        cout << "division is " << (float)a / (float)b << endl;
    }

    void menu()
    {
        int n;
        while (1)
        {
            cout << "oprations" << endl;
            cout << "1.Add" << endl
                 << "2.Substract" << endl
                 << "3.Multiply" << endl
                 << "4.Divide" << endl
                 << "5.Exit" << endl;
            cout << "Enter option :";
            cin >> n;

            

            switch (n)
            {
            case 1:
                getdata();
                sum();
                break;

            case 2:
                getdata();
                substract();
                break;

            case 3:
                getdata();
                product();
                break;

            case 4:
                getdata();
                division();
                break;

            case 5:
                exit(0);
                break;

            default:
                cout << "Invalid Number" << endl;
                break;
            }
        }
    }
};

int main()
{
    arithmetic a;
    a.menu();
    return 0;
}
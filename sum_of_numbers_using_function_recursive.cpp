#include <iostream>
using namespace std;

int sum(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}

int main()
{
    int a;
    cout << "Enter a number upto which you want sum" << endl;
    cin >> a;
    cout << "sum of numbers upto " << a << " is " << sum(a);
    return 0;
}

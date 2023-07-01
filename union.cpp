#include<iostream>
using namespace std;

union uno    //in union we can use only one type
{
    char car;
    float dollar;
    int num;
};


int main()
        {
            uno h1;
            h1.dollar = 6.56;
            h1.car = 'G';
            cout << h1.dollar << endl;//as we use car of type char this will throw error
            cout << h1.car << endl;

            return 0;
        }
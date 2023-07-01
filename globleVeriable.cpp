#include<iostream>
using namespace std;

int c=108;       //globle:We can use it any were

int main()
{
    int a,b,c;

    cout<<"The value of 'a' is:"<<endl;        //we can not use local veriable out side the defined function
    cin>>a;
    cout<<"The value of 'b' is:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum of a and b is(c):"<<c<<endl;

    cout<<"The global value of 'c' is:"<<::c<<endl;//scop resolvation oprator ::
    
    return 0;
    
    

}
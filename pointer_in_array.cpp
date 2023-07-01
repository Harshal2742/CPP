#include<iostream>
using namespace std;

int main()
   {
       int a[]={1,2,3,4,5,6,};
       int i;
       while(i<6)
       {
           cout<<a[i]<<endl;
           i++;
       }
    cout<<"values using pointer in arrays"<<endl;
    int *p = a; //the name of array store address of elements in array
                // and hence it is written as int* p=a instead of int* p=&a;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    cout<<*(p+5)<<endl;
    return 0;
   }
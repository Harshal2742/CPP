#include<iostream>
using namespace std;



int main()
        {
        /*int a=1234;
        int *b=&a;
        cout<<"The value at address b is "<<*b<<endl; 
        cout<<"The address of a is "<<b<<endl; 
        cout<<"The address of a is "<<&a<<endl;*/

    //The new operator allocates memory to a variable
        
        int *b = new int(1234);
        cout<<"The value at address b is "<<*b<<endl; 
        cout<<"The address of b is "<<b<<endl;
   /*The new operator returns the address of the memory location.
    In the case of an array, the new operator returns the address
    of the first element of the array.From the example above, we 
    can see that the syntax for using the new operator is */

        int *arr = new int[4];
        *(arr)=10;
        *(arr+1)=20;
        *(arr+2)=30;
        *(arr+3)=40;
        *(arr+4)=50;
        cout<<"The value at arr[0] "<<arr[0]<<endl;
        cout<<"The value at arr[1] "<<arr[1]<<endl;
        cout<<"The value at arr[2] "<<arr[2]<<endl;
        cout<<"The value at arr[3] "<<arr[3]<<endl;
        cout<<"The value at arr[4] "<<arr[4]<<endl;
        return 0;
        }
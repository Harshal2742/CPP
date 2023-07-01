#include<iostream>
using namespace std;



int main()
        {
         int n;
         cout<<"Enert the value "<<endl;
         cin>>n;
         int* point=new int(n);
         cout<<"The enterd value is "<<*point<<endl;
         
         delete point;
         cout<<"The enterd value is "<<*point<<endl;
         cout<<"This is because we dellocated memory using detete."<<endl;
/*Once we no longer need to use a variable that we have declared 
dynamically,we can deallocate the memory occupied by the variable.
For this, the delete operator is used. It returns the memory to the
operating system. This is known as memory deallocation.*/

        return 0;
        }
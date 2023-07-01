#include<iostream>
using namespace std;



int main()
        {
         int n;
         cout<<"CGPA OF STUDENTS"<<endl;
         cout<<"Enter the number of students :";
         cin>>n;

         float* cgpa=new float[n];

         for(int i=0;i<n;i++)
           {
            cout<<"Student No."<<i+1<<" :";
            cin>>*(cgpa + i);
           }

    cout<<"\nThe entered CGPA of students"<<endl;
         for(int i=0;i<n;i++)
           {

            cout<<"Student No."<<i+1<<" :"<<*(cgpa + i)<<endl;
           }
        return 0;
        }
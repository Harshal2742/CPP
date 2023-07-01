#include<iostream>
using namespace std;



int main()
        {
        int grade,sum=0;

        for(int i=0;i<3;i++)
        {
         do{
            cout<<"Enter "<<i+1<<" grade :";
            cin>>grade;
           }while(grade<1 || grade>5);
           sum+=grade;
        }
        cout<<"Total grade :"<<sum<<endl;
        cout<<"Average :"<<sum/3<<endl;
        return 0;
        }
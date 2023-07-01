#include<iostream>
#include<string>
using namespace std;

struct student
{ 
    string name;       //We define different data type in structure i.e. different datatype in under one datatype
    int roll;
    char div;
    int  MoNo;

};

int main()
        {
        
         struct student xyz;
             {
             xyz.name="C S K";
             xyz.roll=07;
             xyz.div='A';
             xyz.MoNo=1234567890;
             }

        cout<<"Name of student:"<<xyz.name<<endl;
        cout<<"Roll No. of student:"<<xyz.roll<<endl; 
        cout<<"Division of student:"<<xyz.div<<endl; 
        cout<<"Mobile no. of student:"<<xyz.MoNo<<endl; 

        return 0;
        }
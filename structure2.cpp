#include<iostream>
#include<string>
using namespace std;

struct YouTube
{
 private :
 long long subscribers;
 string name;
 
 public :
 void setdata()
 {
  cout<<"Enter channel name :";
  getline(cin,name);
  cout<<"Enter the subscribers :";
  cin>>subscribers;
 }

 void getdata()
 {
 cout<<"Name of channel :"<<name<<endl;
 cout<<"Subscribers :"<<subscribers<<endl; 
 }
};

int main()
        {
        YouTube YT1;
        YT1.setdata();
        YT1.getdata();
        return 0;
        }
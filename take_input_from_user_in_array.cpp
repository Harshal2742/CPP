#include<iostream>
using namespace std;

int main()
{   
    int i;
    int space[4]={};

    cout<<"Enter the marks 5 subject"<<endl;

    for(i=0;i<=4;++i)
    {   
        cin>>space[i];
    }
   
    cout<<"Your entered marks of five subjects are"<<endl;
    
    for(i=0;i<=4;++i)
    {   
       
        if(i<=3)
        cout<<space[i]<<",";
        else  
        cout<<space[i]; 

    }
  
  return 0;    
}
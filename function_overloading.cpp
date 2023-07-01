#include<iostream>
using namespace std;

int area(int a)
    {
        return(a*a);
    }    

int area(int a,int b)
    {
    return(a*b);
    }

int volume(int a,int b,int c)
    {
    return(a*b*c);
    }

int main()
        {
         int w,x,y,z;

         cout<<"1.area of square\n2.area of rectangle\n3.vloume of rectange"<<endl;
         cout<<"Enter a number:";
         cin>>w;

        if(w==1)
           {cout<<"Enter the lenght of side of square:"<<endl;
           cin>>x;

           cout<<"The area of square is "<<area(x);}
        else if(w==2)
           {cout<<"Enter the lenght and breadth of rectangle:"<<endl;
           cout<<"length:";
           cin>>x;
           cout<<"breadth:";
           cin>>y;

           cout<<"The area of square is "<<area(x,y);}
        else if(w==3)
           {cout<<"Enter the lenght,breadth and height of rectangle:"<<endl;
           cout<<"length:";
           cin>>x;
           cout<<"breadth:";
           cin>>y;
           cout<<"height:";
           cin>>z;

           cout<<"The volume of rectangle is "<<volume(x,y,z);}
        else
           {cout<<"Enter a valid number";}

        return 0;
        }
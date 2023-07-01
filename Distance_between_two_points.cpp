#include<iostream>
#include<cmath>
using namespace std;

class point
      {
          int x,y;
          
          public :
            void first(int a,int b)
                 {
                     x=a;
                     y=b;
                 }
            float distance(point,point);

            void display1(void)
                  {
                   cout<<"The co-ordinates of point p are "<<"("<<x<<","<<y<<")"<<endl;
                  }
            
            void display2(void)
                  {
                   cout<<"The co-ordinates of point q are "<<"("<<x<<","<<y<<")"<<endl;
                  }

      };
    
float point :: distance(point u,point v)
    {
     return sqrt(pow(v.x-u.x,2) + pow(v.y-u.y,2));
    }

int main()
        {
         int s,t,w,z;
        
         cout<<"enter the co-ordinates of p point :"<<endl;
         cin>>s>>t;
        
         cout<<"enter the co-ordinates of q point :"<<endl;
         cin>>w>>z;
        
         point p;
         p.first(s,t);
         p.display1();

         point q;
         q.first(w,z);
         q.display2();
        
        point r;
        cout<<"The distance between point p and q is "<<r.distance(p,q);
        return 0;
        }
#include<iostream>
using namespace std;
                            /*  123456789
                               1    *      
                               2   * *     
                               3  * * *    
                               4 * * * *   
                               5* * * * *    */
int main()
        {
        int i,j,space,row;

        cout<<"Enter th enumber of rows you want :";
        cin>>row;
        
        for(i=1;i<=row;i++)
           {
             for(space=row;space>=i;space--)
             {
                 cout<<" ";
             }

             for(j=1;j<=i;j++)
             {
                cout<<"* ";
             }
             cout<<endl;
           }

        return 0;
        }
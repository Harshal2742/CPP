#include<iostream>
using namespace std;



int main()
        {
        char al;
        cout<<"Enter the character : ";
        cin>>al;

        if(al == 'a'|| al == 'e'|| al =='i' || al =='o' || al== 'u'|| al=='A' || al== 'E'|| al== 'I'|| al== 'O'|| al=='U')
        {
            cout<<"vowel"<<endl;
        }
        else
        {
          cout<<"consonant"<<endl;
        }
        return 0;
        }
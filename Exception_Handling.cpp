#include <iostream>
using namespace std;

class print
{
    string name_;
    int available_Pages;

public:
    print(string name, int pages)
    {
        name_ = name;
        available_Pages = pages;
    }

    void Print(string txtDoc)
     {
         int required_pages = txtDoc.length() / 15;//here we consider on one page their will be 15 char

         if(required_pages > available_Pages)
             throw 10020;

         cout << "Printing..." << endl;
         cout << txtDoc << endl;
         available_Pages -= required_pages;
     }
};

int main()
{
    print p1("canon", 10);
    try {
         p1.Print("Hello to every one.I am Hacker and your computer get hacked.");
         p1.Print("Hello to every one.I am Hacker and your computer get hacked.");
         p1.Print("Hello to every one.I am Hacker and your computer get hacked.");
        }
    catch(const char* exception)
        {
            cout << exception << endl;
        }

     catch(int _exception)
        {
            cout << _exception << endl;
        } 

    catch(...)//it is an default handler and can handle any type of exception
        {
            cout <<"Exception occurs"<< endl;
        }
    
    
    return 0;
}
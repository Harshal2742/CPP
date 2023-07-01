#include <iostream>
#include <memory> // Must required for smart pointer
using namespace std;

//unique_ptr, shared_ptr and weak_ptr
//Smart pointer automatically deallocate memory after thier scope exit

class MyClass
{
public:
    MyClass()
    {
        cout << "Constructor invoked" << endl;
    }

    ~MyClass()
    {
        cout << "Destructor invoked" << endl;
    }
};

int main()
{
    //unique pointer
    /*{
        unique_ptr<MyClass> unPtr1 = make_unique<MyClass>();
        //unique_ptr<MyClass> unPtr2 = unPtr1; -->this will throw error
        unique_ptr<MyClass> unPtr2 = move(unPtr1);
    }*/

    /* {
        shared_ptr<MyClass> shePtr1 = make_shared<MyClass>();
        cout << "Shared cout : " << shePtr1.use_count() << endl;
        {
            shared_ptr<MyClass> shePtr2 = shePtr1;
            cout << "Shared cout : " << shePtr1.use_count() << endl;
        }
        cout << "Shared cout : " << shePtr1.use_count() << endl;
    }*/

    {
        weak_ptr<MyClass> wePtr1;
        {
            shared_ptr<MyClass> shePtr3 = make_shared<MyClass>();
            wePtr1 = shePtr3;
        }

        weak_ptr<int> wePtr2;
        {
            shared_ptr<int> shePtr4 = make_shared<int>(1000);
            wePtr2 = shePtr4;
        }
    }
    return 0;
}
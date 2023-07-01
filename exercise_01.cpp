#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int substract(int a, int b)
{
    return a - b;
}
int multiple(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

/* void display()
{
            int n,a,b;
            cout<<"Oprations"<<endl;
            cout<<"1.Add"<<endl<<"2.Substract"<<endl<<"3.Multiply"<<endl<<"4.Divide"<<endl<<"5.Exit"<<endl;
            cout<<"Enter your option :";
            cin>>n;
            if(n<5){
            cout<<"Enter two numbers"<<endl;
            cin>>a>>b;
            }

            switch(n){
            case 1 :
                cout<<"Addition is "<<add(a,b)<<endl;
                display();
                break;
            case 2 :
                cout<<"Substraction is "<<substract(a,b)<<endl;
                display();
                break;
            case 3 :
                cout<<"Multiplication is "<< multiple(a,b)<<endl;
                display();
                break;
            case 4 :
                cout<<"Division is "<<division(a,b)<<endl;
                display();
                break;
            case 5 :
                cout<<"Thanks"<<endl;
                break;
            default :
                cout<<"Invalid number"<<endl;
            }
} */

int main()
{
    //display();
    while (1)
    {
        int n, a, b;
        cout << "Oprations" << endl;
        cout << "1.Add" << endl
             << "2.Substract" << endl
             << "3.Multiply" << endl
             << "4.Divide" << endl
             << "5.Exit" << endl;
        cout << "Enter your option :";
        cin >> n;
        if (n < 5)
        {
            cout << "Enter two numbers" << endl;
            cin >> a >> b;
        }

        switch (n)
        {
        case 1:
            cout << "Addition is " << add(a, b) << endl;
            break;
        case 2:
            cout << "Substraction is " << substract(a, b) << endl;
            break;
        case 3:
            cout << "Multiplication is " << multiple(a, b) << endl;
            break;
        case 4:
            cout << "Division is " << division(a, b) << endl;
            break;
        case 5:
            cout << "Thanks" << endl;
            exit(0);
            break;
        default:
            cout << "Invalid number" << endl;
        }
    }
    return 0;
}
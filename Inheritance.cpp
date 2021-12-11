#include<iostream>
using namespace std;

class Base
{
    public:
        int a=5;
        void display()
        {
            cout<<"display of base "<<a<<endl;
        }
};

class Derived : public Base
{
    public:
        void show()
        {
            cout<<"Show of Derived";
        }
};       /// Inherited class

int main()
{
    Derived d;
    d.a=100;
    d.display();
    d.show();
}


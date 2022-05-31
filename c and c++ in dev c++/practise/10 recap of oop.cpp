//program with pure virtual funciton of array pointer object in inheritance where funciton overloading is present
//same program can be check with virtual funciton only i.e. by making late binding of funciton
#include <iostream>
using namespace std;
class A
{
public:
    virtual void display() = 0;
};
class B : public A
{
public:
    void display()
    {
        cout << "\nthis is class B";
    }
};
class C : public A
{
    void display()
    {
        cout << "\nthis is class C";
    }
};
int main()
{
    A *ptr[2];
    B b;
    C c;
    ptr[0] = &b;
    ptr[1] = &c;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}
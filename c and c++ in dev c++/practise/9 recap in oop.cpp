//program with virtual base class to reslove ambiguty in inheritance
#include <stdio.h>
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void dispa()
    {
        a = 99;
        cout << "in class A a=" << a;
    }
};
class B : public virtual A
{
    int b;

public:
    void dispb()
    {
        b = 88;
        cout << "\nin class B b=" << b;
    }
};
class C : public virtual A
{
    int c;

public:
    void dispc()
    {
        c = 848;
        cout << "\nin class C c=" << c;
    }
};
class D : public B, public C
{
    int d;

public:
    void dispd()
    {
        d = 7848;
        cout << "\nin class D d=" << d;
    }
};
int main()
{
    D obj;
    obj.dispa();
    obj.dispb();
    obj.dispc();
    obj.dispd();
    return 0;
}
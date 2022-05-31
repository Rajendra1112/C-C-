//assignment operator overloading to assign value of obj2 into abj1 or viceversa..
//while define operator overloading its format is similar to copy consturctor
#include <iostream>
using namespace std;
class assign
{
private:
    int a = 0, b = 0;

public:
    assign(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a=" << a << "\tb=" << b;
    }
    void operator=(assign &d)
    {
        a = d.a;
        b = d.b;
    }
};
int main()
{
    assign a1(77, 34), a2(44, 77);
    cout << "before overloadign:\n";
    cout << "value of a and b of a1 obj:\n";
    a1.show();
    cout << "value of a and b of a2 obj:\n";
    a2.show();
    cout << "after overloading:\n";
    a1 = a2;
    cout << "value of a and b of a1 obj:\n";
    a1.show();
    //cout << "value of a and b of a2 obj:\n";
    //a2.show();
    return 0;
}
#include <iostream>
using namespace std;
class base
{
private:
    int x;

public:
    base()
    {
        x = 99;
    }
    friend class derived;
};
class derived
{
public:
    void display(base b)
    {
        cout << "x=" << b.x;
    }
};
int main()
{
    base b;
    derived d;
    d.display(b);
    return 0;
}
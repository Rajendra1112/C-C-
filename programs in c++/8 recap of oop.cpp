#include <iostream>
using namespace std;
class Base
{
private:
    double a;

public:
    void display()
    {
        cout << "enter value of a:";
        cin >> a;
        cout << "a=" << a;
    }
};
class newclass : public Base
{
private:
    int b;

public:
    void display()
    {
        cout << "enter value of b:";
        cin >> b;
        cout << "b=" << b;
    }
};
int main()
{
    Base *b;
    b->display();
    return 0;
}
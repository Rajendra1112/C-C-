#include <stdio.h>
#include <iostream>
using namespace std;
int fun1(int a)
{
    return a * a;
}
int fun1(int *p, int c)
{
    int sum;
    sum = (*p) + c;
    return sum;
}
class A
{
private:
    int a;

public:
    A()
    {
        a = 10;
        cout << "\na=10";
    }
    A(int x, int y)
    {
        int sum;
        sum = x + y;
        cout << "\nsum=" << sum;
    }
};
int main()
{
    int a, b, c;
    int *po;
    cout << "enter the value of a:";
    cin >> a;
    cout << "result=" << fun1(a);
    cout << "\nenter the value of b and c:";
    cin >> b >> c;
    po = &b;
    cout << "result is:" << fun1(po, c);
    A obj1;
    A obj2(50, 60);
    return 0;
}
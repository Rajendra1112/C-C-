#include <iostream>
using namespace std;
class A
{
private:
    int a;
    friend class B;
};
class B
{
public:
    void display(A a1)
    {
        cout << "enter value of a:";
        cin >> a1.a;
        cout << "a=" << a1.a;
    }
};
int main()
{
    A a1;
    B b1;
    b1.display(a1);
    return 0;
}
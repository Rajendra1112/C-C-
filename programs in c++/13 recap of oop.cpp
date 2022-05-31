//unary operator overloading using friend function
//in unary operator overloading we pass one argument
//in binary operator overloading we pass two argument
#include <iostream>
using namespace std;
class sample
{
private:
    int a, b, c;

public:
    sample()
    {
        cout << "enter the value of a,b,c:";
        cin >> a >> b >> c;
    }
    void show()
    {
        cout << "a=" << a << "\tb=" << b << "\tc=" << c;
    }
    void friend operator-(sample &s);
};
void operator-(sample &s)
{
    s.a = -s.a;
    s.b = -s.b;
    s.c = -s.c;
}
int main()
{
    sample s1;
    cout << "before overloading:\n";
    s1.show();
    -s1;
    cout << "after overloading:\n";
    s1.show();
    return 0;
}
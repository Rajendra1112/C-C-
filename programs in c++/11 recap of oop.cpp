// unary operator(++) operator overloading
#include <iostream>
using namespace std;
class Base
{
private:
    int x, y;

public:
    Base()
    {
        x = 0;
        y = 0;
    }
    void operator++() //to define operator symbol as a member function we use operator word infront of symbol
    {
        x += 1;
        y += 1;
    }
    void display()
    {
        cout << "x=" << x;
        cout << "\ty=" << y;
    }
};
int main()
{
    Base b1, b2;
    cout << "before operator overloading:\n";
    b1.display();
    cout << "\nafter operator overloading:\n";
    ++b1; //increment of non primitive datatype is possible due to defination of operator
        //symbol which lead to operator overloading as we got two defination for one symbol
    b1.display();
    ++b2;
    b2.display();
}

#include <stdio.h>
#include <iostream>
using namespace std;
class A
{
protected:
    char name[15];
};
class B
{
protected:
    int roll;
};
class C : private A, private B
{
public:
    void show()
    {
        cout << "enter name:";
        gets(name);
        cout << "enter roll no:";
        cin >> roll;
        cout << "name=" << puts(name);
        cout << "roll no:" << roll;
    }
};
int main()
{
    C o1;
    o1.show();
    return 0;
}


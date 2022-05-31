#include <iostream>
using namespace std;
class car
{
public:
    void shiftgear()
    {
        cout << "gear shifted in old fashion..";
    }
};
class sportcar : public car
{
public:
    void shiftgear()
    {
        cout << "gear shifted in modern way..";
    }
};
int main()
{
    car *c;
    sportcar s;
    c = &s;
    c->shiftgear();
    return 0;
}
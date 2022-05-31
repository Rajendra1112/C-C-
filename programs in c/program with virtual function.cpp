#include <iostream>
using namespace std;
class car
{
public:
    virtual void shiftgear() //virtual function is written for late binding of funciton
    //to overcome function overridding we use virtual function
    {
        cout << "gear shifted in old fashion..";
    }
};
class sportcar : public car
{
public:
    void shiftgear() //function overridding and this function is also virtual function as that of parent
    {
        cout << "gear shifted in modern way..";
    }
};
int main()
{
    car *c; //pointer of base class
    sportcar s;
    c = &s;
    c->shiftgear(); /*here is c is the pointer object of child class and
    if no virtual function then function of child will not call during 
    late binding function call is based on content of pointer while in 
    early binding funciton call is based on whose type of pointer*/
    return 0;
}
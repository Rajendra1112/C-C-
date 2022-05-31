//program  function template..Note:if function overloadign condtion is faced on basis of
//only datatype inside argumanet of function then we simply used function template..
#include <iostream>
using namespace std;
template <class X, class Y> //multiple funciton template
X BIG(X a, Y b)             //syntax for single templete-> template<class type> type fn name(type var,type var)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    cout << "greater=" << BIG(10, 20);
    cout << "greater=" << BIG(20.033, 20.123);
    cout << "greater=" << BIG(40, 3.2);
    return 0;
}
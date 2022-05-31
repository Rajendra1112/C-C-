//division by zero condition..Also exception in factorial
//Here both the exception will not happen simultaneously only one at a time either zero condition ro negative condition..
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n, result;
    float a, b;
    cout << "enter the divident and dividor:";
    cin >> a >> b;
    cout << "enter the no for factorial:";
    cin >> n;
    try
    {
        if (b == 0)
            throw b;
        cout << "required result=" << (a / b);
        if (n < 0)
            throw n;
        result = factorial(n);
        cout << "\nfactorial of given number is:" << result;
    }
    catch (float a)
    {
        cout << "exception number is:" << a;
        cout << "\ndivision by zero condition..";
    }
    catch (int a)
    {
        cout << "\nexception occur due to negative no." << a;
    }
    return 0;
}
//binary operator(+) overloading here operator is overloaded because we use operator for primitive
//data type like int and for non primitive data type like addtion for obj of class so we got two defination of same symbol
#include <iostream>
using namespace std;
class sample
{
private:
    int d, e;

public:
    void getdata()
    {
        cout << "enter value of d and e:";
        cin >> d >> e;
    }
    void show()
    {
        cout << "d=" << d << "\te=" << e;
    }
    sample add(sample s)
    {
        sample temp;
        temp.d = d + s.d;
        temp.e = e + s.e;
        return temp;
    }
    sample operator+(sample s) //operator symbol as member function with its defintation for addition
    {
        sample temp;
        temp.d = d + s.d;
        temp.e = e + s.e;
        return temp;
    }
};
int main()
{
    sample s1, s2, s3;
    s1.getdata();
    s2.getdata();
    s3 = s1.add(s2); //addition of object's value with out operator symbol function i.e. operator overloading defination
    s3.show();
    cout << "\nafter overloading:";
    s3 = s1 + s2; //here s1 obj call + operator passing s2 obj as an argument..Non primitive datatype addition is possbile
    s3.show();
    return 0;
}
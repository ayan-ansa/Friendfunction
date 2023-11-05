#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void SetNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    friend Complex sumComplex(Complex o1, Complex o2);
    void print()
    {
        cout << "Number is " << a << " + " << b << "i" << endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.SetNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.SetNumber(1, 4);
    c1.print();
    c2.SetNumber(4, 6);
    c2.print();
    sum = sumComplex(c1, c2);
    sum.print();

    return 0;
}
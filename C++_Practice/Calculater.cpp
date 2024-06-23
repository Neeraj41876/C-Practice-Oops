#include <iostream>
using namespace std;
class calculater
{
public:
    int a, b, oper;
    void getdata(int a, int b, int oper);
};

void calculater ::getdata(int a, int b, int oper)
{
    switch (oper)
    {
    case 1:
    {
        cout << "Addtion of two number" << ":" << a + b << endl;
        break;
    }
    case 2:
    {
        cout << "Subtraction of two number" << ":" << a - b << endl;
        break;
    }
    case 3:
    {
        cout << " Multiplication of two number" << ":" << a * b << endl;
        break;
    }
    case 4:
    {
        cout << " Division of two number" << ":" << a / b << endl;
        break;
    }
    default:
        cout << "Invalide input";
        break;
    }
}
int main()
{
    calculater sum;
    int c, d, oper;
    cout << "Enter the number" << endl;
    cin >> c >> d;
    cout << "Enter the oper" << endl;
    cin >> oper;
    sum.getdata(c, d, oper);
    return 0;
}
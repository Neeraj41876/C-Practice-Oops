#include <iostream>
using namespace std;
class detail
{
    // Private Section
private:
    int a, b;

public: // Public Section
    int c, d, e;
    void setdata(int a1, int b1); //  Function Declaration
    void printdata() // Function Declaration
    {
        cout << "The  value  Of a:" <<" "<< a<<endl;
        cout << "The  value  Of b:" <<" "<< a<<endl;
        cout << "The  value  Of c:" <<" "<< c<<endl;
        cout << "The  value  Of d:" <<" "<< d<<endl;
        cout << "The  value  Of e:" <<" "<< e<<endl;
    }
};
void detail ::setdata(int a1, int b1)
{
    a = a1;
    b = b1;
}

int main()
{
    detail memory;
    memory.c=30;
    memory.d=40;
    memory.e=50;
    memory.setdata(10,20);
    memory.printdata();

    return 0;
}
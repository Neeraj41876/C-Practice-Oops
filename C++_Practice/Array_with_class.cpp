#include <iostream>
using namespace std;
class emp
{
private:
    int id;
    int salary;

public:
    void getid(void);
    void setid(void);
};
void emp ::getid(void)
{
    cout << "Enter the id:" << endl;
    cin >> id;
}
void emp ::setid(void)
{
    cout << "The id is:"<< id << endl;
}
int main()

{
    int number;
    cout << "Enter the id of  Total Employee" << endl;
    cin >> number;
    emp neeraj[number];
    for (int i = 0; i < number; i++)
    {
        neeraj[i].getid();
        neeraj[i].setid();
    }
    return 0;
}
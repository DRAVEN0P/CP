#include <iostream>
using namespace std;

class Ap
{

    int a, b;

public:
    void input(void);
    void sum(void);
};
void Ap::input(void)
{
    cout << "Enter The First no: ";
    cin >> a;
    cout << "Enter The Second no: ";
    cin >> b;
}
void Ap::sum(void)
{
    int digit_sum = 0;
    for (int i = a; i <= b; i++)
    {
        int p = i;
        while (p > 0)
        {
            digit_sum += p % 10;
            p /= 10;
        }
    }
    cout << digit_sum << endl;
}
int main()
{
    Ap Ap;
    Ap.input();
    Ap.sum();

    return 0;
}
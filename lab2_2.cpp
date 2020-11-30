#include "iostream"
using namespace std;

int fib(int num);

int main()
{
    int num;
    cout << "Enter the amount of numbers: ";
    cin >> num;
    fib(num);
    return 0;
}

int fib(int num)
{
    int c, a = 1, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < num - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
}

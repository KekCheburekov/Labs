#include "iostream"
using namespace std;

int main()
{
    int a,b;

    cout << "Enter the first number: " << endl;
    while ((cin >> a).fail())
    {
        cout << "Not a digit" << endl;
        cin.clear();
        cin.ignore();
    }
     cout << "Enter the second number: " << endl;
    while ((cin >> b).fail())
    {
        cout << "Not a digit" << endl;
        cin.clear();
        cin.ignore();
    }

    cout << a + b << " -- sum" << endl;
    
    return 0;
}
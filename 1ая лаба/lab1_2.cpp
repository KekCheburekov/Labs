#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    cout << "Entrer the number" << endl;

    while ((cin >> a).fail())
    {
        cout << "Not integer. Try again" << endl;
        cin.clear();
        cin.ignore();
    }
    cout << "It is defenetly a digit: " << a << endl; 
    return 0;
}

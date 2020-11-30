#include "iostream"
#include "math.h"
using namespace std;

int main(int argc, char const *argv[])
{
    cout.setf(ios_base::fixed);
    cout.precision(1);
    string a = "1232";
    float b;
    b = (float)a.length() / 3;
    cout << b << endl;

    return 0;
}

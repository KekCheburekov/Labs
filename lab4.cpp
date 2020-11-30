#include "iostream"
#include "string"
#include "math.h"
using namespace std;

string name(string *arr,string *arr1, string *arr2, string *arr3, int a);

int main(int argc, char const *argv[])
{
    string nums0_9 [] {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string nums10_19 [] {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
     "seventeen", "eighteen", "ninteen" };
    string nums20_90 [] { "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty"};
    string xz [] {"hunderd", "thousand", "million", "billion"};

    unsigned long int b;
    string full;
    float lngth;

    cout.setf(ios_base::fixed);
    cout.precision(0);

    cout << "Enter a positive integer: ";
    cin >> b;
    lngth = (float)to_string(b).length() / 3;
    lngth = ceil(lngth);

    for (int i = 0; i < lngth; i++)
    {
        if ((i > 0) and (b % 1000 != 0))
        {
            full = name(nums0_9, nums10_19, nums20_90, xz, b % 1000)+ xz[i]+ " " + full;
            b /= 1000;
        }
        else
        {
            full = name(nums0_9, nums10_19, nums20_90, xz, b % 1000) + full;
            b /= 1000;
        }
        
    }
    cout << full << endl;
    return 0;
}

string name(string *arr,string *arr1, string *arr2, string *arr3,int a)
{   
    string temp;
    if (a == 0)
    {
        return "";
    }
    
    else if (a / 100 > 0)
    {
        if (a % 100 != 0)
        {
            temp +=  arr[a / 100] + " " + arr3[0] + " ";
        }
        else
        {
            temp +=  arr[a / 100] + " " + arr3[0] + " ";
            cout << temp << endl;
            return temp;
        }
        
    }
    a = a % 100;
    if ((a >= 10) and (a <= 19))
    {
        temp += arr1[a - 10] + " ";
    }
    else if (a < 10)
    {
        temp += arr[a % 10] + " ";
    }
    else if (a > 19)
    {
        if (a % 10 != 0)
        {
            temp += arr2[a / 10 - 2] + " " + arr[a % 10] + " ";
        }
        else
        {
             temp += arr2[a / 10 - 2] + " ";
        }  
    }
    return temp;

}
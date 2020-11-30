#include "iostream"
#include "algorithm"
#include "string"
using namespace std;

void name(string *arr,string *arr1, string *arr2, string *arr3, unsigned int a);

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    string nums0_9 [] {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string nums10_19 [] {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
     "seventeen", "eighteen", "ninteen" };
    string nums20_90 [] { "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty"};
    string xz [] {"hunderd", "thousand", "million", "billion"};

    name(nums0_9, nums10_19, nums20_90, xz, num);
}
void name(string *arr,string *arr1, string *arr2, string *arr3, unsigned int a)
{   
    string temp;
    if (a / 100 > 0)
    {
        if (a % 100 != 0)
        {
            temp +=  arr[a / 100] + " " + arr3[0] + " ";
        }
        else
        {
            temp +=  arr[a / 100] + " " + arr3[0] + " ";
            cout << temp << endl;
            return;
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
    cout << temp << endl;

}
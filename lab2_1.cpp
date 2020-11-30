#include "iostream"
using namespace std;

void message (int kolvo);

int main()
{
   int num;
   cout << "Введите число: ";
   cin >> num;
   message(num); 
    return 0;
}

void message (int kolvo)
{
    for ( int i = 0; i < kolvo + 1; i++)
    {
        cout << "Message №" << i << endl;
    }   
}
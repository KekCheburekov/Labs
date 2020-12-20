
#include <iostream>
#include <iomanip>
using namespace std;

int** create(int n);
void nul(int** a, int n);
void zig(int** a, int n);
void mainDiag(int** a, int n);
void secDiag(int** a, int n);
void neDiag(int**a, int n);

int main(int argc, char* argv[])
{   
    int** A;
    int n;
    int choise;
    cout << "Enter the size" << endl;
    cin >> n;
    cout << "Choose the option and enter its number: zig -- 1,mainDiag -- 2, secDiag -- 3, all exept diags -- 4" << endl;
    cin >> choise;

    A = create(n);
    nul(A,n);
    switch (choise)
    {
    case 1:
        zig(A,n);
        break;
    case 2:
        mainDiag(A,n);
        break;
    case 3:
        secDiag(A,n);
        break;
    case 4:
        neDiag(A,n);
        break;
    default:
        break;
    }
    
    return 0;
}

int** create(int n)
{
    int** Arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        Arr[i] = new int [n];
    }
    return Arr;
}

void nul(int** a, int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            a[row][column] = 0;
            cout << setw(1) << a[row][column] << " ";
        } 
        cout << endl;  
    }
    cout << endl;
}

void zig(int** a, int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if ((row + 1) % 2 != 0)
            {
                a[row][col] = 1;
            }
            else
            {
                if (((row + 1) / 2) % 2 != 0)
                {
                    a[row][n-1] = 1;
                }
                else
                {
                    a[row][0] = 1;
                }
                
            }
            
        }
        
    }
    for (int row = 0; row < n; row++) 
    {
        for (int col = 0; col < n; col++)
        {
            cout << setw(1) << a[row][col] << " ";
        }
        cout << endl;
    }
    
}

void mainDiag(int** a, int n)
{
    for (int row = 0; row < n; row++)
        for (int col = 0; col < n; col++)
        {
            if (row == col)
            {
                a[row][col] = 1;
            } 
        }
    for (int row = 0; row < n; row++)
    {
       for (int col = 0; col < n; col++)
        {
            cout << a[row][col] << " ";
            
        }
        cout << endl; 
    }
}

void secDiag(int** a, int n)
{
    for (int row = 0; row < n; row++)
        for (int col= 0; col < n; col++)
        {
            if (row + col == n - 1)
            {
                a[row][col] = 1;
            } 
        }
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
}

void neDiag(int**a, int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        {
            if ((row != column) and (row + column != n - 1))
            {
                a[row][column] = 1;
            }
            cout << a[row][column] << " ";
        } 
        cout << endl;  
    } 
}
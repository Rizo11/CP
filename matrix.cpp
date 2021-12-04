#include <iostream>

using namespace std;

int main()
{
    //reading array

    int a[3][4]; //row, column

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
        
    }
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
        
    } 


    //transponirovaniye matrisi
    //a[i][j] => a[j][i]

    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][jz]
        }
        
    }


    return 0;
}
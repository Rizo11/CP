#include <iostream>

using namespace std;

int main()
{
    short int n, m;
    cin >> n >> m;
    long long int a[m] = {0};
    for(int i = 0; i < m*n; i++)
    {
        int num = 0;
        cin >> num;
        a[i%m] += num;
    }
    for(int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
}
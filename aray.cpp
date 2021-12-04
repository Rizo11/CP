#include <iostream>

using namespace std;

int main() {
    // int size = 8;
    // // cin >> size;
    // int a[size] = {1, 2 ,3, 4, 5, 6, 7, 8};
    // // while (size--) {
    // //     cin >> a[size];
    // // }
    // for (auto now : a) cout << now << " ";


    // int n;
    // cin >> n;
    // int a[n];
    // for(int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    
    // int min = a[0], max = a[0];

    // for(int i = 0; i < n; i++)
    // {
    //     if(a[i] > max) max = a[i];
    //     if(a[i] < min) min = a[i];
    // }
    
    // for(int i = 0; i < n; i++)
    // {
    //     if(a[i] == min or a[i] == max)
    //     {
    //         if(a[i] == min) cout << max << " ";
    //         else if(a[i] == max) cout << min << " ";
    //     }
    //     else cout << a[i] << " ";
    // }


    int n, q;
    cin >> n;
    int a[n];
    for(auto& w: a)
    {
        cin >> w;
    }

    for(cin >> q; q; --q)
    {
        short int j;
        cin >> j;
        cout << a[--j] << " ";
    }
    return 0;   
}
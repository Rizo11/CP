#include <iostream>
#include  <cmath>
using namespace std;

int main(){
    // long long a,n,b=1,k=1;
    // cin>>a>>n;
    // a=a*(-1);
    // for(int i=0;i<n;i++){
    //     b+=a*k;
    //     k*=a;
    // }

    // cout<<b;


//     int j = 0;
//     for (int i = 0; i <= 666; ++i) {
//     while (i % 6 != 0) {
//         i = i + 1;
//     }
//     cout << i << " ";
//     j++;
// }
//     cout << j;

    //interesting num
    // unsigned long long int L, R;
    // cin >> L >> R;
    // long long int rem = R%L, rem1;
    // short int counter = 0;
    // if(L == 0)
    // {
    //     cout << 0;
    //     return 0;
    // }
    // if(rem == 0)
    // {
    //     rem1 = L;
    // }
    // while(rem)
    // {
    //     R = L;
    //     L = rem;
    //     rem1 = rem;
    //     rem = R%L;
    // }
    // for(int i = 2; i <= rem1; i++)
    // {
    //     if(rem1%i == 0)
    //     {
    //         counter++;
    //     }
    // }
    // cout << counter;


    short int a, b;
    cin >> a >> b;
    short int i = 1;
    while(pow(1.5, i) <= double(a/b))
    {
        i++;
    }
    cout << i;

    return 0;
}

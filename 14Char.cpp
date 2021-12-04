#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // char c;
    // // cout << '>' + '<';
    // cin >> c;
    // cout << char(c + (c%97- c%65)%33);
    // cout.setf(ios::fixed);
	// cout.precision(0);

    // double a = 1;
    // double b = 3;
    // double c = 1000000;
    // cout << a/b << "\n";
    // cout << a/c;

    // long double a;
    // cin >> a;
    // float b = a;
    // cout << a - b << endl;

    // bool a;
    // cin >> a;
    // cout << a;

    // long a, b;
    // cin >> a >> b;
    // cout << (a < b);

    // long a, b, c, d, e;
    // short int k = 0;
    // cin >> a >> b >> c >> d >> e;
    // k = (a%2==0) + (b%2==0) + (c%2==0) + (d%2==0) + (e%2==0);


    cout.setf(ios::fixed);
	cout.precision(6);
    
    short int a, b, c;
    cin >> a >> b >> c;
    
    cout << (-b - sqrt(b*b - 4*a*c))/2*a;


    // cout << k;

    return 0;
}
//to save ints <= 256 you can use char to save the space, bc char = 1 byte, where int = 4 bytes 
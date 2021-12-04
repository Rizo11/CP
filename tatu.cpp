#include <iostream>

using namespace std;

int main()
{
//   for(int i = 0; i < 7; i++)
//   {
//     for(int j = 0; j < 7; j++)
//     {
//       bool pos;
//       cin >> pos;
//       if(pos)
//       {
//         cout << abs(3-i) + abs(3-j);
//         return 0;
//       }
//     }
//   }



//problem c
    short int side = 0, side2 = 0;
    cin >> side >> side2;
    if(side < side2)
    side = side >= side2 ? side : side2;
    if(side%2 == 0)
    {
        cout << (7-side) << "/" << 6/2;
    }
    else
    {
        cout << (7-side)/2 << "/6";
    }

  return 0;
}
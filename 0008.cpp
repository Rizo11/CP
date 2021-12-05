#include <iostream>

using namespace std;

int main()
{
  int a[5] = {0}, min = 1e9, max = 1, minI, maxI;
  
  for(int i = 0; i < 5; i++)
  {
    cin >> a[i];
    if(a[i] >= max)
    {
      maxI = i;
      max = a[i];
    }
    if(a[i] <= min)
    {
      minI = i;
      min = a[i];
    }
  }
  long long int mi = 0, ma = 0;

  for (int i = 0; i < 5; i++)
  {
      if(i != maxI)
      {
          mi += a[i];
      }
      if(i != minI)
      {
          ma += a[i];
      }
  }
  cout << mi << " " << ma;
  
}
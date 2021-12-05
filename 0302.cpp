#include <iostream>

using namespace std;

int main()
{
    string s = "";
    getline(cin, s);
    int a[26] = {0}, b[26] = {0};
    cout << s.length() << " ";
    for (int i = 0; i < s.length()-1; i++)
    {
        char r = s[i];
        cout << r << int(r);
        if(64< int(r) && int(r)< 91)
        {
            a[int(r)-65] += 1;
        }
        else if(96 < int(r) && int(r) < 123)
        {
            a[int(r)-97] += 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        cout << char(i+64) << " " << a[i] << "\n";
    }
    for (int i = 0; i < 26; i++)
    {
        cout << char(i+97) << " " << a[i] << "\n";
    }

    return 0;

}
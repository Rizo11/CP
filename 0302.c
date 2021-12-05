#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    int a[122] = {0};
    while (c != '\n')
    {
        if(65<= c <= 90)
        {
            a[(int)c-1] += 1;
        }
        else if(97 <= c <= 122)
        {
            a[(int)c-1] += 1;
        scanf("%c", &c);
    }
    for (int i = 96; i < 122; i++)
    {
        printf("%c %d\n", i+1, a[i]);
    }
    for (int i = 64; i < 90; i++)
    {
        printf("%c %d\n", i+1, a[i]);
    }

    return 0;
}
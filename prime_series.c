#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int a = 1, count;
    int a=2,count;
    while (a <= n)
    {
        count = 0;
        int i = 2;
        while (i <= a / 2)
        {
            if (a % i == 0)
            {
                count++;
                break;
            }
            i++;
        }
        // printf("%d",count);
        if (count == 0 )
        {
            printf("%d ", a);
        }
        a++;

    }
    return 0;
}
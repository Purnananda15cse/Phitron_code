#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    //shape 3
    int n;
    scanf("%d", &n);
    int star;
    for(int i=1,star=1; i<=n; i++, star+=2){
        for(int j=1; j<=n-i+1; j++){
            printf(" ");
        }
        for(int k=1; k<=star; k++){
            printf("*");
        }
        printf("\n");
    }

    star-=2;
    
    for(int i=1; i<=n; i++, star-=2){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int k=star; star>=1; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
      *
     ***
    *****
  *********
   *******
    *****
     ***
      *
*/
// 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Upper part of the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the pattern

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// 
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     // Upper part of the pattern
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     // Lower part of the pattern
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
 
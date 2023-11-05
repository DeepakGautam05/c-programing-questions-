// program to  generate a multiplication table
#include <stdio.h>

int main()
{
    int num;
    printf("enter the number :");
    scanf("%d\n", &num);
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d * %d = %d\n", num, i, i * num);
    // }

     for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, i * num);
    }
    return 0;
}
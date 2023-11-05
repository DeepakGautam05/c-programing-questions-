#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("enter the last number you want to sum of\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("sum of first %d natural number is : %d", num, sum);

    return 0;
}
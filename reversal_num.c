#include<stdio.h>
int main(){
int n,Newnum=0;
scanf("%d",&n);

// while (n != 0)      
// {
//     int rem = n % 10;
//     Newnum = Newnum * 10 + rem;
//     n = n /10;
// }


//by for loop
for (int i = n; i != 0; i /= 10)
{
   int rem = i % 10;
   Newnum = Newnum * 10 + rem;
}

    printf("%d",Newnum);}
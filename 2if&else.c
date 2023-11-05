//  program to check a number is divisible by 2 or not 
// #include<stdio.h>
// int main (){
//     int x;
//     printf("Enter a num : ");
//     scanf("%d",&x);
//     printf("%d", x % 2 == 0);
// }

#include<stdio.h>
int main (){
    int age;
    printf("Enter a age : ");
    scanf("%d", "&"age);
  
  if (age > 18)
  {
    printf("YOU ARE ADULT\n");
    printf("YOU can vote \n");
  }
  else
  {
    printf("NOW YOU ARE A CHILD");
  }
  return 0;

}

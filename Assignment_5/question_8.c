// Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
          int num;
          printf("Enter number:");
          scanf("%d",&num);
          for(int i=1;i<=num;i++){
                    printf("%d\n",i*i);
          }
          return 0;
}
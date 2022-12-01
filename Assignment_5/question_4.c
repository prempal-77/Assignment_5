//. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{         
          int num;
          printf("Enter number:");
          scanf("%d",&num);
          for(int i=1;i<=num;i++){
                    printf("%d\n",2*i-1);
          }
          return 0;
}
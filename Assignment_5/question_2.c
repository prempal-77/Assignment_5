// Write a program to print the first N natural numbers
#include<stdio.H>
int main()

{
          int n;
          printf("Enter a number:\n");
          scanf("%d",&n);
          for(int i=1;i<=n;i++){
                    printf("%d\n",i);
          }
          return 0;
}
//. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
          int counter,n;
          printf("Enter a positive number\n");
          scanf("%d",&n);
          printf("Printing the value form %d to 1 \n",n);
          for(counter=n;counter>0;counter--){
                    printf("%d \n",counter);
          }
          return 0;

          
}
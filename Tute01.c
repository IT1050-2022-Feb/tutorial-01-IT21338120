/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
   int num1,num2;
  float average;
int sum;

printf("enter mark1:");
scanf("%d",&num1);

  printf("enter mark2:");
scanf("%d",&num2);
sum = num1 + num2;
average = sum /2.0;
printf("average is %.2f",average);
  return 0;
}


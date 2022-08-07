/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
int s1,s2,total;
  float avg;

  printf("input subject 01 marks:");
  scanf("%d",&s1);

  printf("input subject 02 mark:");
  scanf("%d",&s2);

  total= s1+s2;
    printf("Total marks :%d",total);

  avg= total/2;
    printf("Avarage of marks : %.2f");
  
  return 0;
}


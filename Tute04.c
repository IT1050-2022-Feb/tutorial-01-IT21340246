/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include<stdio.h>
int min(int no1,int no2);
int max(int no1,int no2);
int multi(int no1,int no2);

int main()
{  int no1,no2;

  printf("Enter the value for number 01 :");
  scanf("%d",&no1);
  printf("Enter the value for number 02 :");
  scanf("%d",&no2);
  printf("%d",min(no1,no2));
  printf("%d",max(no1,no2));
  printf("%d",multi(no1,no2));
  
  return 0;
}
int min(int no1,int no2){
 if(no1<no2)
 return no1;
 else
  return no2;
}

int max(int no1,int no2)
{
	if(no1<no2)
	return no1;
	else
	 return no2;
}

int multi(int no1,int no2)
{
return no1*no2;
}
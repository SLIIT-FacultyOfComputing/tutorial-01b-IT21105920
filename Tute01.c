/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1 , num2;
	
	printf("Input Number 1 : ");
	scanf("%d" , &num1);
	
	printf("Input Number 2 : ");
	scanf("%d" , &num2);
	
	printf("\nAverage is %.2f" , (num1+num2)/2.0);
	
  return 0;
}


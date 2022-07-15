/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void main ()
{
	//user enter a number
	int num,i;
	int factorial = 1 ;
	printf ("Enter an integer: ");
	fflush (stdout);
	scanf ("%d",&num);

	if (num>=0)
	{
	//find factorial of number 10 >> 10*9*8*...*1
	for (i = 1 ; i <= num ; i++)
		factorial *=i;
	printf ("Factorial = %d", factorial);
	}
	else
		printf ("Error!!! Factorial of negative numbers doen't exist");

}

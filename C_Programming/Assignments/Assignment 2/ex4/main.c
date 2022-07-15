/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void main ()
{
	//user enter a number
	float num;
	printf ("Enter a number: ");
	fflush (stdout);
	scanf ("%f", &num);

	//check whether the number is positive or negative or zero
	if (num>0)
		printf ("%0.3f is positive",num);
	else if (num<0)
		printf ("%0.3f is negative",num);
	else
		printf ("%0.3f is zero",num);
}

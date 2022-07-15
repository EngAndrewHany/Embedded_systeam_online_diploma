/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Andrew Hany
 */
#include <stdio.h>

void main ()
{
	//Learn how to swap numbers with temp_val

	float a,b,temp_val ;
	printf ("Enter value of a: ");
	fflush (stdout);
	scanf("%f", &a);
	fflush (stdout);
	printf ("Enter valur of b: ");
	fflush (stdout);
	scanf("%f", &b);
	temp_val = a ;
	a = b;
	b = temp_val;
	printf ("After swapping, value of a = %0.2f \n ",a);
	fflush (stdout);
	printf ("After swapping, value of b = %0.2f ",b);

}


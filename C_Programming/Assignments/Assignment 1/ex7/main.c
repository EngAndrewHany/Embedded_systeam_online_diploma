/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void main ()
{
	//Learn how to swap numbers without temp_val

	float a,b;
	printf ("Enter value of a: ");
	fflush (stdout);
	scanf("%f", &a);
	fflush (stdout);
	printf ("Enter valur of b: ");
	fflush (stdout);
	scanf("%f", &b);

	a = a+b; // a = sum
	b = a-b; // b = sum-old b >>> b = a
	a = a-b; // a = sum-new b >>> a = b



	printf ("After swapping, value of a = %0.2f \n ",a);
	fflush (stdout);
	printf ("After swapping, value of b = %0.2f ",b);
}



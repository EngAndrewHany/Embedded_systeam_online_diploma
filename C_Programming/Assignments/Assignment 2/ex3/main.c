/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Andrew Hany
 */
#include <stdio.h>

void main ()
{
	//user enter 3 numbers
	float x,y,z;
	printf ("Enter three numbers: ");
	fflush(stdout);
	scanf ("%f %f %f", &x , &y , &z);

	//compare the tree numbers together to find largest one
	if ( x>y && x>z )
	{
		printf ("largest number = %f" , x);
	}
	else if ( y>x && y>z )
	{
		printf ("largest number = %f" , y);
	}
	else
	{
		printf ("largest number = %f" , z);
	}

}


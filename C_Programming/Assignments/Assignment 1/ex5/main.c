/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Andrew Hany
 */
#include <stdio.h>

void main ()
{
	//Learn how to convert from type to another

	char c ;
	printf ("Enter a Character: ");
	fflush(stdout);
	scanf ("%c" , &c);
	fflush(stdout);
	printf ("ASCII Valur of %c = %d" , c , c);
}

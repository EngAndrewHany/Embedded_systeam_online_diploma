/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void main ()
{
	//Learn How to use scanf function

	int num ;
	printf ("Enter an Integer: ");
	fflush(stdout);
	scanf ("%d", &num);
	fflush (stdout);
	printf ("You Entered: %d" , num);


}

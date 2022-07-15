/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void main ()
{
	//user enter number
	int num ;
	printf ("Enter an integer you want to check: ");
	fflush (stdout);
	scanf ("%d", &num);
	fflush (stdout);

	//check whether the number is odd or even
	if (num%2 ==0)
		printf("%d is even",num);
	else
		printf("%d is odd",num);

}

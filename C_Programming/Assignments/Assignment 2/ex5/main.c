/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void main ()
{
	//user enter a character
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&c);

	//check whether a character is an alphabet or not by compare it to alphabet ASKII code
	if ( (c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		printf("%c is an alphabet",c);
	else
		printf("%c is not an alphabet",c);
}

/*
 * main.c
 *
 *  Created on: Jul 24, 2022
 *      Author: Andrew Hany
 */
#include <stdio.h>
#include <string.h>

void main()
{
	int i;
	char a [50];

	printf("Enter a string: ");
	fflush(stdout);
	gets(a);


	for (i=strlen(a)-1 ; i>=0 ;i--)
	{
		printf("%c",a[i]);
	}

}

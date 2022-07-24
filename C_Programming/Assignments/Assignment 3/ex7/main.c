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
	int i=0,len=0;
	char a [50];

	printf("Enter a string: ");
	fflush(stdout);
	gets(a);
	printf("I got: %s\n", a);

	for (i=0;i<50;i++)
	{
		if ( a[i]!=0)
		{
			len = len+1 ;
		}
		else
		{
			break;
		}
	}

	printf("length of the string = %d\n",len);
}

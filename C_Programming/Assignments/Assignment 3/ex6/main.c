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
	int counter=0;
	char a [50] , c;

	printf("Enter a string: ");
	fflush(stdout);
	gets(a);
	printf("I got: %s\n", a);

	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&c);

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


	for (i=0;i<len;i++)
	{
		if (c == a[i])
		{
			counter = counter+1 ;
		}
	}

	printf("Frequency of %c = %d ",c,counter);

}


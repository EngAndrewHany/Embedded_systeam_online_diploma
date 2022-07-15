/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Andrew Hany
 */
#include <stdio.h>

void main()
{
	//user enter integer number
	int num,i;
	int sum = 0 ;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	fflush(stdout);

	//calculate the sum of natural naumbers from 1 to num
	for ( i = 1 ; i <= num ; i++)
	{
		sum  = sum+i;
	}
	printf("sum = %d",sum);
}



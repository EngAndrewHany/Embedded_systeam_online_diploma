/*
 * main.c
 *
 *  Created on: Jul 22, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void main()
{
	float a [2][2];
	float b [2][2];
	float s [2][2];
	int i,r,c;

	// for loop to get 2 matrix 2*2
	for (i=97;i<99;i++)
	{
		printf("Enter Matrix %c \n",i);

		for (r=0;r<2;r++)
		{
			for (c=0;c<2;c++)
			{
				printf("Enter %c%d%d: \n", i ,r+1,c+1);
				fflush(stdout);
				if (i==97)
					scanf("%f", &a[r][c]);
				else
					scanf("%f", &b[r][c]);

			}

		}
		//print the matrix you get
		printf("Matrix %c is: \n",i);

		for (r=0;r<2;r++)
		{
			for (c=0;c<2;c++)
			{
				if (i==97)
					printf("%c%d%d: %f \n",i,r+1,c+1,a [r] [c]);
				else
					printf("%c%d%d: %f \n",i,r+1,c+1,b [r] [c]);
			}

		}
	}
	// sum of the two matrix
	printf(" Matrix sum is: \n");

	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			s [r] [c] = a [r] [c] + b  [r] [c];
			printf("s%d%d: %f \n",r+1,c+1,s[r][c]);
		}

	}




}















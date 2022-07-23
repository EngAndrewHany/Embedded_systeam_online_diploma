/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void main()
{
	float mat_a [5][5],mat_t [5][5];
	int r,c,row,col;

	//user Enter size of the matrix []*[]
	printf("Enter Rows And Columns of Matrix: ");
	fflush(stdout);
	scanf ("%d %d",&row,&col);
	fflush(stdout);
	fflush(stdout);

	//user Enter the matrix a
	for (r=0;r<row;r++)
	{
		for (c=0;c<col;c++)
		{
			printf("Enter Element a%d%d: ",r+1,c+1);
			fflush(stdout);
			scanf("%f", &mat_a[r][c]);
			fflush(stdout);
		}
	}

	//print matrix a
	printf("Matrix a is: \n");
	for (r=0;r<row;r++)
	{
		for (c=0;c<col;c++)
		{
			printf("%.2f \t",mat_a [r][c]);
		}
		printf("\n");
	}

	printf("Transpose Matrix is: \n");

	//transpose matrix a and save the result in matrix t
	for (r=0;r<col;r++)
	{
		for (c=0;c<row;c++)
		{
			mat_t [r][c]=mat_a [c][r];
		}
	}

	//print matrix t
	for (r=0;r<col;r++)
	{
		for (c=0;c<row;c++)
		{
			printf("%.2f \t",mat_t  [r][c]);
		}
		printf("\n");
	}
}


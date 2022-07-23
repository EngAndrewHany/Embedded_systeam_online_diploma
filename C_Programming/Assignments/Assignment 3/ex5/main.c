/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void main()
{
	float a [20],search;
	int i,num;

	printf("Enter no of elements (max=20): ");
	fflush(stdout);
	scanf("%d",&num);

	for (i=0;i<num;i++)
	{
		printf("Enter the %d element: ",i+1);
		fflush(stdout);
		scanf("%f",&a[i]);
		fflush(stdout);
	}

	printf("the elements are: \n");

	for (i=0;i<num;i++)
	{
		printf("%0.2f \t",a [i]);
	}

	printf("\nEnter the element to be searched: \n");
	fflush(stdout);
	scanf("%f",&search);

	for (i=0; i<=num;)
	{
		if (search!=a[i])
		{
			if(i==num)
			{
				printf("Number not exist\n");
			}
			i++;
		}
		else
		{
			printf("Number found at location: %d",i+1);
			break;
		}
	}
}

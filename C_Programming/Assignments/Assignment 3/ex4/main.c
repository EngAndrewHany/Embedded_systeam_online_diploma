/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: Andrew Hany
 */
#include <stdio.h>
void main()
{
	int i,num,ele,loc,a [30];

	//user enter number of elements
	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&num);

	//user enter the elements
	for (i=0;i<num;i++)
	{
		printf("Enter element no %d: ",i+1);
		fflush(stdout);
		scanf("%d",&a[i]);
	}

	//print the elements
	for (i=0;i<num;i++)
	{
		printf("%d ", a[i]);
	}

	//enter the element you want to insert
	printf("\nEnter The elements to be insert: ");
	fflush(stdout);
	scanf("%d",&ele);
	fflush(stdout);

	//select the location of the insert element
	printf("Enter The location: ");
	fflush(stdout);
	scanf("%d",&loc);


	//shift element 1 bit to right
	for (i=num;i>=loc;i--)
	{
		a [i]=a[i-1];
	}

	//add extra place for the insert element
	num++;
	a [loc-1]= ele ;

	//print final result
	for (i=0;i<num;i++)
	{
		printf("%d ", a[i]);
	}
}



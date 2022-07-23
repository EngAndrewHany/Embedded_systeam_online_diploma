/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>
void main ()
{
	int i,num;
	float a[15],sum;

	printf ("Enter The Number of Data (max=15): ");
	fflush(stdout);
	scanf ("%d",&num);

	for (i=0;i<num;i++)
	{
		printf ("%d. Enter The Number: ",i+1);
		fflush(stdout);
		scanf ("%f",&a[i]);
		sum = sum + a[i];
	}

	printf ("Average = %.2f",sum/num);

}

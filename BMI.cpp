#include <stdio.h>
int main()
//calcualtion of BMI
{	float a,b,c=0;
	printf ("Type your weight (in kg) and height (in m).\n");
	scanf ("%f%f", &a,&b);
	c=a/(b*b);
	printf("Your BMI is %f\n", c);
	
	if (c<=18)
	printf ("You are underweight.\n");
	else
		{
		if (18<c<25)
		printf("Your are normal.\n");
		else
			{
			if (c>=25)
			printf ("You are obese.\n");
			}
		}
	return 0;
}

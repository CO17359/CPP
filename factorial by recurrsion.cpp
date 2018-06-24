//TO FIND THE FACTORIAL THROUGH RECURSION//

#include <stdio.h>
int rec(int);
int main()
{
	int a, fact;
	printf("Enter the number\n");
	scanf("%d",&a);
	fact=rec(a);
	
	printf("The factorial of the number is %d", fact);
	return 0;
}
int rec(int x)
{
	int f ;
	
	if (x==1)
	return 1;
	
	else
	f=x*rec(x-1);
	return(f);
}

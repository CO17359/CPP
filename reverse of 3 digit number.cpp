#include <stdio.h>
int main()

{

char another,y ;
int num;
for(another='y';another=='y';)
{
	printf("enter a number");
	scanf("%d", &num);
	printf("square of %d is %d\n", num,num*num);
	printf("want to enter another number y/n");
	fflush (stdin);
	scanf("%c", &another);
	
}
	
	return 0;

}


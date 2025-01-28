#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("enter the values of x,y,z");
	scanf("%d%d%d",&x,&y,&z);
	if (x>y&&x>z)
	printf("\n x is maximum");
	if (y>z&&y>x)
	printf("\n y is maximum");
	else
	printf("\n z is maximum");
	
	
}
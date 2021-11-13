#include<stdio.h>
void main()
{
	int l,b,area,perimeter;
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("\narea of rectangle is %d",area);
	printf("\nperimeter of rectangle is %d",perimeter);
}
#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a=5,b=7;
	printf("a is %d and b is %d",a,b);
	swap(&a,&b);
	printf("\na is %d and b is %d",a,b);
	getch();
}

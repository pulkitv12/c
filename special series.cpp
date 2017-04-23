#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	float i,sum=0.000,x;
	printf("Enter a Number\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		x=1/i;
		sum=sum+x;
	}
	printf("Sum of series upto %d is %f",num,sum);
	getch();

}

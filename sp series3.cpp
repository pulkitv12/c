#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,sum1=0,sum2=0,sum;
	printf("Enter a Number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i+=2)
	{
	sum1=sum1-i;
	}
	for(i=2;i<=num;i+=2)
	{
	sum2=sum2+i;
	}
	sum=sum1+sum2;
	printf("Sum of series is %d",sum);
	
	getch();

}

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,d,sum=0,rev=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	while(num!=0)
	{
		d=num%10;
		num=num/10;
		sum=sum+d;
		rev=d+rev*10;
	}
	printf("sum is %d",sum);
	printf("\nrev is %d",rev);
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a,sum=0;
	printf("Enter a number");
	scanf("%d",&num);
	for(a=1;a<=num;a+=2)
	{
		sum=sum+a;
	}
	printf("Sum of odd numbers upto %d is %d",num,sum);
	getch();

}

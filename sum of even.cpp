#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a,sum=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	for(a=2;a<=num;a+=2)
	{
		sum=sum+a;
	}
	printf("Sum of even numbers upto %d is %d",num,sum);
	getch();

}

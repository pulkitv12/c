#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0;
	char ch;
	printf("\nEnter a number or 0 to sum\n");
	do
	{
	scanf("%d",&num);
	sum=sum+num;
	}while(num!=0);
	printf("sum is %d\n",sum);
	getch();
	
}

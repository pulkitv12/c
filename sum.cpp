#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0;
	char ch;
	do
	{
	printf("\nEnter a number\n");
	scanf("%d",&num);
	sum=sum+num;
	printf("sum is %d\n",sum);
	printf("Do you want to add more numbers ? (Y/N)\n");
	ch=getche();
	}while(ch=='y'|| ch=='Y');
	getch();
	
}

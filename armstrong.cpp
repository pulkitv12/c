#include<stdio.h>
#include<conio.h>
int main()
{
int num,d,a,sum=0,rev;
printf("Enter a number");
scanf("%d",&num);
while(num!=0)
{
	d=num%10;
	
	sum=sum+d;
	
	num=num/10;
	rev=d+rev*10;
	printf("\n%d",d);
}
printf("\n%d",sum);
printf("\n%d",rev);
	getch();
	
	
}

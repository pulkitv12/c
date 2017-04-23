#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,d,rev=0,arm=0,n,c=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
	
		d=n%10;
		n=n/10;
		arm=arm+pow(d,4);
	}
	if(num==arm)
	{
		printf("%d is Armstrong",num);
	}
	else
	{
		printf("%d is not Armstrong",num);
	}
	getch();
}

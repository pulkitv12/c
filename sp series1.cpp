#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,i,sum=1,x;
	printf("Enter a Number\n");
	scanf("%d",&num);
	x=num;
	for(i=2;i<=num;i++)
	{
		sum=sum+(i*(pow(x,i)));
	}
	printf("%d",sum);
	getch();

}

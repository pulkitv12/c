#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,i,sum=0;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+pow(i,2);
	
	}
	printf("%d",sum);
	getch();
	
}

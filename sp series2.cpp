#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float num,i,sum=0,x;
	printf("Enter a Number\n");
	scanf("%f",&num);
	for(i=1;i<=num;i++)
	{
		x=i+1;
		sum=sum+(i/x);
	}
	printf("%f",sum);
	getch();

}

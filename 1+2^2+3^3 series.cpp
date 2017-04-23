#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,p=1,a,sum=0;
	printf("Enter a number");
	scanf("%d",&num);
	for(a=1;a<=num;a++)
	{
		sum=sum+pow(a,p);
		p=p+1;
	}
	printf("%d",sum);
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	float sum=0,c=0,avg;
	printf("Enter a number or 0 to quit\n");
	while(3==3)
	{
		scanf("%d",&num);
		sum=sum+num;
		c++;
		if(num==0)
		break;
	}
	c=c-1;
	avg=sum/c;
	printf("Sum is %f\n",sum);
	printf("Average is %f",avg);
	getch();
	
}

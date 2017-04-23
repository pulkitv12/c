#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a,r,c=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	for(a=2;a<num;++a)
	{
		if((num%a)==0)
		{
			c++;
		}
	}
	if(c==0)
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
	
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,d,rev=0,n;
	printf("Enter a number");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		rev=d+rev*10;
	}
		if(num==rev)
	{
		printf("%d is Palindrome",num);
	}
	else
	{
		printf("%d is not Palindrome",num);
	}
	
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,n=0,t,rev=0,c=0;
	printf("Enter a number");
	scanf("%d",&t);
	while(t!=0)
	{
		a=t%10;
		n=a+n;
		rev=a+10*rev;
		c++;
		
		
		
t=t/10;
}
		printf("%d",n);
		printf("\n%d",rev);
	
	
	
	
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,sum=0;
printf("Enter a number");
scanf("%d",&a);
for (b=1;b<=a;++b)
{
	sum=sum+b;
}
printf("%d",sum);

getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter a number");
scanf("%d",&a);

for (b=1;b<=20;b=b+1)
{
c=(a*b);
	printf("%d * %d = %d\n",a,b,c);

}


getch();
}

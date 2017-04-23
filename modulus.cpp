#include<stdio.h>
#include<conio.h>
int main()
{
int a=2,b,c;
scanf("%d",&b);
c=b%a;
printf("%d",c);
if(c==0)
{
printf("The number is even");
}
else
{
printf("The number is odd");
}
getch();
}

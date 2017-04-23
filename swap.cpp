#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
printf("Enter two numbers a & b");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n%d\n%d",a,b);
getch();
}

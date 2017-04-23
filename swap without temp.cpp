#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter two values");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d",a);
printf("b=%d",b);
getch();
}

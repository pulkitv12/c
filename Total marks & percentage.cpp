#include<stdio.h>
#include<conio.h>
int main()
{
int p;
float i,r,t;
printf("Enter Principle Amount-");
scanf("%d",&p);
printf("Enter Rate of Interest-");
scanf("%f",&r);
printf("Enter Time-");
scanf("%f",&t);
i=p*r*t/100;
printf("\nSimple Interst is-%f",i);
getch();
}


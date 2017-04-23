#include<stdio.h>
#include<conio.h>
int main()
{
int maths,eng,sci,total;
float pcnt;
printf("Enter three marks\n");
scanf("%d%d%d",&maths,&eng,&sci);
total=maths+eng+sci;
pcnt=(total*100)/300.0;
printf("Percentage is %.2f",pcnt);
if(pcnt>=90)
printf("\nGRADE A+");
else if((pcnt>=80)&&(pcnt<90))
{printf("\nGRADE A");
}
else if((pcnt>=70)&&(pcnt<80))
{printf("\nGRADE B");
}
else if((pcnt>=60)&&(pcnt<70))
{printf("\nGRADE C");
}
else 
{printf("\nFAIL");
}
getch();
}

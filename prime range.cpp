#include<conio.h>
#include<stdio.h>
int main()
{

 int num,a;
	
	for(num=1;num<=500;num++)
	{
	int c=0;

	for(a=2;a<num;a++)
	{
		if(num%a==0)
		c++;
	}
   
	if(c==0)
	printf("\n%d",num);	
	
	
	
}

	getch();
	
}




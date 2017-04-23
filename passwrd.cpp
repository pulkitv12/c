#include<stdio.h>
#include<conio.h>
int main()
{
	char p[100];
	int i=0;
	while(1)
	{
		p[i]=getch();
		if(p[i]==13)
		break;
		printf("*");
		i++;
	}
	p[i]='\0';
	printf("\npassword is %s",p);
getch();
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char film[100];char dfilm[100];
	int i,n=5,found;
	clrscr();
	printf("Player 1 : Enter film ?\n");
	i=0;
	while((film[i]=getch())!=13)
	{
		dfilm[i]=(film[i]==' '?' ':'_');
		i++;
	}
	film[i]=dfilm[i]='\0';
	//printf("film is %s and dfilm is %s",film,dfilm);
	clrscr();
	gotoxy(10,5);
	printf("%s",dfilm);
	gotoxy(5,10);
	printf("Player 2 : Guess characters\nYou have %d chances",n);
	ch=getche;
	found=0;
	for(i=0;film[i]!='\0';i++)
	if film[i]==ch
	{
		found=1;
		dfilm[i]=ch;
	}
	printf("\nnow film is %s and found is %d",dfilm,found);
	getch();
	
}

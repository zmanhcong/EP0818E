#include <stdio.h>
int main()
{
	char string[100];
	int asc[100];
	printf(" nhap chuoi ");
	scanf ("%s", &string);
	int chuhoa=0, chuthg=0, so=0, sotu=0;
	for (int i = 0; i < 100; i ++)
	{
		if ( string[i] != NULL)
		{
			asc[i] = string[i];			
		}
		else 
			break;	
	}
	for (int i = 0; i < 100; i ++)
	{
			if(64 <asc[i] <91)
				{
				chuhoa++;}
			else if(96<asc[i] <123)
				{
				chuthg++;}
			else if(47<asc[i] <58)
				{
				so++;}
			else if(asc[i]==32)
				{
				sotu++;}
	}
	printf (" \nso chu hoa la : %d", chuhoa);
	printf (" \nso chu thuong la : %d", chuthg);
	printf (" \nso so la : %d", so);
	printf (" \n so tu la : %d", sotu+1);
	
}

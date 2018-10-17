#include<string.h>
#include<stdio.h>
#include<conio.h>

void chuan_hoa(char str[])
{

	while(str[0]==' ') 
	{
		strcpy(&str[0],&str[1]);
	}
	for(int i=0;i<strlen(str)-1;i++)
	{
		if((str[i]==' ') && (str[i+1]==' '))
		{
			strcpy(&str[i],&str[i+1]);
			i--;	
		}
	}
	while(str[strlen(str)-1]==' ')
	{
		strcpy(&str[(strlen(str)-1)],&str[strlen(str)]);
	}
	
}

int main()
{
	int so_tu=0;
	int chu_thuong=0;
	int chu_hoa=0;
	int chu_so=0;
	char str[200];
	fflush(stdin);
	gets(str); 
	chuan_hoa( str );
	printf("KQ:\"%s\"",str);
	// so so tu
	for(int i =0;i<strlen(str);i++)
	{
		if(str[i]==' ')
		{
			so_tu= so_tu+1;	
		}
		if('a'<=str[i]&&str[i]<='z'&&str[i]!=' ')
	 	{
	 		chu_thuong++;
		 }
		 	if(('A'<=str[i])&&(str[i]<='Z')&&(str[i]!=' '))
	 	{
	 		chu_hoa++;
		 }
		 if(('0'<=str[i])&&(str[i]<='9')&&(str[i]!=' '))
	 	{
	 		chu_so++;
		 }
	
	}
	printf("\nSo tu la: %d",so_tu+1);
	printf("\nSo chu viet thuong la: %d",chu_thuong);
	printf("\nSo chu viet hoa la: %d",chu_hoa);
	printf("\nSo chu so la: %d",chu_so);
	
}

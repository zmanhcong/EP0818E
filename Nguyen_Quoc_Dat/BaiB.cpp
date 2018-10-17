#include<stdio.h>
#include<string.h>

int chuanhoa(char str[])
{
	int i,j;
	while(str[0] = ' ')
	{
		for( j =0; j < strlen(str); j++)
			str[j] = str[j+1];
	}
	
	for(i = 0; i < strlen(str); i++)
	{
		if((str[i] = ' ') &&(str[i+1] = ' '))
		{
				for( j =i; j < strlen(str); j++)
				{
					str[j] = str[j+1];
				}
			i--;	
		}
	
	}	
}

int chuhoa(char str[])
{
	int i;
	int count =0;
	for(i = 0; i <strlen(str);i++)
	{
		if( (str[i] >= 'A') && (str[i] <= 'Z'))
			count++;
	}
	return count;
}

int chuthuong(char str[])
{
	int i;
	int count =0;
	for(i = 0; i <strlen(str);i++)
	{
		if( (str[i] >= 'a') && (str[i] <= 'z'))
			count++;
	}
	return count;
}

int so(char str[])
{
	int i;
	int count=0;
	for(i = 0; i <strlen(str);i++)
	{
		if( (str[i] >= '0') && (str[i] <= '9'))
			count++;
	}
	return count;
}

int tu(char str[])
{
	int i;
	int count=0;
	for(i = 0; i <strlen(str);i++)
	{
		if( str[i] >= ' ')
			count++;
	}
	return count+1;
}

int main()
{
	char str[30];
	printf("Nhap chuoi cua ban : ");
	gets(str);
	printf("\nSo chu viet hoa la : %d",chuhoa(str));
	printf("\nSo chu viet thuong la : %d",chuthuong(str));
	printf("\nSo chu chu so la : %d",so(str));
	chuanhoa(str);
	printf("\nSo tu la : %d",tu(str));
}

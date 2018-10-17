#include <stdio.h>
#include <string.h>


int Input(char string[])
{
	printf("Nhap vao 1 xau ky tu: ");
	gets(string);
}

int CountUpperChar(char check[])
{
	int i,count;
	count = 0;
	for (i=0;i<strlen(check);i++)
	{
		if ((check[i] >= 'A') && (check[i] <= 'Z'))
		count++;
	}
	return count;
}

int CountLowerChar(char check[])
{
	int i,count;
	count = 0;
	for (i=0;i<strlen(check);i++)
	{
		if ((check[i] >= 'a') && (check[i] <= 'z'))
		count++;
	}
	return count;
}

int CountNumber(char check[])
{
	int i,count;
	count = 0;
	for (i=0;i<strlen(check);i++)
	{
		if ((check[i] >= '0') && (check[i] <= '9'))
		count++;
	}
	return count;
	
}

int DeleteChar(char check[], int i)
{
	int j;
	for (j=i;j<strlen(check);j++)
	{
		check[j] = check[j+1];
	}
}


int CheckString(char check[])
{
	int i;
	while (check[0] == ' ')
	{
		DeleteChar(check,0);
	}
	for (i=0;i<strlen(check);i++)
	{
		if ((check[i] == ' ') && (check[i+1] == ' '))
		{
			DeleteChar(check,i);
			i--;
		}
	}
	
}


int CountSpace(char check[])
{
	int i,count;
	count = 0;
	for (i=0;i<strlen(check);i++)
	{
		if (check[i] == ' ')
		count++;
	}
	return count;
}



int main()
{
	char string[100];
	Input(string);
	printf("So chu cai viet HOA trong xau la: %d",CountUpperChar(string));
	printf("\nSo chu cai viet THUONG trong xau la: %d",CountLowerChar(string));
	printf("\nSo chu so trong xau la: %d",CountNumber(string));
	CheckString(string);
	printf("\nSo tu trong xau la: %d",CountSpace(string));
}

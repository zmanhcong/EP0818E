#include<stdio.h>
#include<string.h>
char str[30];
void checkchuviethoa(char str[])
{
	int i;
	int dem=0;
	for(i=0;i<strlen(str);i++)
	{
		if((str[i]>=65)&&(str[i]<=90))
		{
			dem++;
		}
	}
	printf("\n so chu cai viet hoa %d",dem);
}
void checkchuvietthuong(char str[])
{
	int i;
	int dem=0;
	for(i=0;i<strlen(str);i++)
	{
		if((str[i]>=97)&&(str[i]<=122))
		{
			dem++;
		}
	}
	printf("\n so chu cai viet thuong %d",dem);
}
void checkso(char str[])
{
	int i;
	int dem=0;
	for(i=0;i<strlen(str);i++)
	{
		if((str[i]>=48)&&(str[i]<=57))
		{
			dem++;
		}
	}
	printf("\n so chu so %d",dem);
}
void checktu(char str[])
{
	int i;
	int dem=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==32)
		{
			dem++;
		}
	}
	printf("\n so tu %d",dem+1);
}
int main()
{

	printf("\n nhap chuoi ");
	gets(str);
	checkchuviethoa(str);
	checkchuvietthuong(str);
	checkso(str);
	checktu(str);
}

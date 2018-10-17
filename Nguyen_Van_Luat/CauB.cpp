#include <stdio.h>
#include<string.h>
int dem_chu_cai_hoa(char *string);
int dem_chu_cai_thuong(char *string);
int dem_so(char *string);
int dem_so_tu(char *string);
int main()
{
	char str[100];
	printf("Nhap vao xau ky tu:\n");
	gets(str);
	printf("Xau ky tu vua nhap la: %s\n",str);
	printf("Trong xau co %d chu cai hoa\n",dem_chu_cai_hoa(str));
	printf("Trong xau co %d chu cai thuong\n",dem_chu_cai_thuong(str));
	printf("Trong xau co %d so\n",dem_so(str));
	printf("Trong xau co %d tu\n",dem_so_tu(str));
	return 0;
}
/*Ham dem chu cai viet hoa trong xau*/
int dem_chu_cai_hoa(char *string)
{
	int count=0;
	int length=strlen(string);
	int i;
	for(i=0;i<length;i++)
	{
		if(string[i]>='A' && string[i]<='Z')
		count++;
	}
	return count;
}
/*Ham dem chu cai thuong trong xau*/
int dem_chu_cai_thuong(char *string)
{
	int count=0;
	int length=strlen(string);
	int i;
	for(i=0;i<length;i++)
	{
		if(string[i]>='a' && string[i]<='z')
		count++;
	}
	return count;
}
/*Ham dem bao nhieu so trong xau*/
int dem_so(char *string)
{
	int count=0;
	int length=strlen(string);
	int i;
	for(i=0;i<length;i++)
	{
		if(string[i]>='0' && string[i]<='9')
		count++;
	}
	return count;
}
/*Ham dem bao nhieu tu trong xau*/
int dem_so_tu(char *string)
{
	int count=1;
	int length=strlen(string);
	int i;
	for(i=0;i<length;i++)
	{
		if(string[i]==' ')
		count++;
	}
	return count;
}

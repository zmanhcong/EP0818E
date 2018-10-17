#include <stdio.h>
#include <string.h>
void Xoa1daucach(char a[],int n)
{
	for (int i=n;i<strlen(a);i++)
	{
		a[i] = a[i+1];
	}
}

int KiemTra(char ch)
{
	if ('a'<=ch && ch<='z') return 1;
	else
		return 0;
}
int main()
{
	int demHoa=0;
	int demThuong=0;
	int demCach=0;
	int demSo=0;

	char c[1000];
	printf("Nhap vao chuoi:");
	gets(c);
	int y = strlen(c);
	printf("\nChuoi vua nhap la:%s", c);
	
	for (int i = 0; i<y; i++)
	{
		 while ((c[i] == ' ') && (c[i + 1] == ' '))
		{
			Xoa1daucach(c, i + 1);
		
		}
	}
	y = strlen(c);
	if (c[y-1] == ' ')
	{
		c[y - 1] = '\0';
	}
	if (c[0] == ' ' )
	{
		Xoa1daucach(c, 0);
	}
	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] != ' ')
		{
			if ((48 >= c[i] || c[i] >= 57))
			{
			
			if ('a' <= c[i] && c[i] <= 'z')
			{
				demThuong++;
			}
			else
			{
				demHoa++;
			}
		}
	}
	
	}
	for (int i = 0; i < y; i++)
	{
		if (c[i] == ' ')
			demCach++;
	}
	for (int i = 0; i < y; i++)
	{
		if ((48 <= c[i] && c[i] <= 57))
			demSo++;
	}
	printf("so ki tu viet hoa la: %d\n",demHoa);
	printf("so ki tu viet thuong la: %d\n",demThuong);
	printf("so ki tu so la: %d\n",demSo);
	printf("so tu la: %d\n",demCach+1);
}

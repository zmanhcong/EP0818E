#include <stdio.h>
#include <iostream>
#include<string.h>

	void Xoa1daucach(char a[],int y)  //Ham xoa 1 ki tu tai vi tri y bat ki.
{


	for (int i = y; i <  strlen(a); i++)
	{
		a[i] = a[i + 1];
	}

	
}

int KiemTra(char ch)  // Ham kiem tra ki tu hoa thuong
{
	if ('a' <= ch && ch <= 'z') return 1;
	else
		return 0;

}

int main()

{

	
	int demHoa = 0, demThuong = 0, demCach = 0, demSo = 0;

	char c[100];
	printf("Nhap vao chuoi:");
	gets(c);
	int y = strlen(c);
	printf("\nChuoi ban vua nhap la:%s", c);
	//printf("\nChuoi ban vua nhap co do dai la:%d ", y);

	//chuan hoa chuoi
	for (int i = 0; i<y; i++)
	{
		 while ((c[i] == ' ') && (c[i + 1] == ' '))
		{
			Xoa1daucach(c, i + 1);
		
		}
		

	}
	y = strlen(c);

	//Xoa dau cach cuoi cung:
	if (c[y-1] == ' ')
	{
		c[y - 1] = '\0';
		//Xoa1daucach(c, y-1);
		//lanxoa++;
	}

	//Xoa dau cach dau tien:
	if (c[0] == ' ' )
	{
		Xoa1daucach(c, 0);
	}
	




	//printf("\nChuoi ban vua nhap sau khi chuan hoa la:"); puts(c);
	//printf("\nChuoi chuan hoa co do dai la:%d ", strlen(c));

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

	//Dem so dau cach
	for (int i = 0; i < y; i++)
	{
		if (c[i] == ' ')
			demCach++;
	}

	//Dem so chu so
	for (int i = 0; i < y; i++)
	{
		if ((48 <= c[i] && c[i] <= 57))
			demSo++;
	}


	printf("\nSo chu cai viet hoa la:%d", demHoa);
	printf("\nSo chu cai viet thuong la:%d", demThuong);
	printf("\nSo chu so la:%d", demSo);
	printf("\nSo tu la:%d\n", demCach+1);



}


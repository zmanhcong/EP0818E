#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{
	char Name[20];
	unsigned int Page;
	unsigned int Price;
};

int Input(struct book List[],int num)
{
	int i;
	for (i=0;i<num;i++)
	{
		fflush(stdin);
		printf("Nhap ten sach thu %d: ",i+1);
		gets(List[i].Name);
		printf("Nhap so trang cua sach thu %d: ",i+1);
		scanf("%d",&List[i].Page);
		printf("Nhap gia tien cua sach thu %d: ",i+1);
		scanf("%d",&List[i].Price);
	}
}

int Output(struct book List[],int num)
{
	int i;
	printf("Mang %d quyen sach vua nhap la:",num);
	for (i=0;i<num;i++)
	{
		printf("\nTen quyen sach thu %d la:",i+1);
		puts(List[i].Name);
		printf("So trang cua quyen sach thu %d la: %d",i+1,List[i].Page);
		printf("\nGia tien cua quyen sach thu %d la: %d",i+1,List[i].Price);
	}
}

int WriteFile(struct book List[],int num)
{
	FILE* filename;
	filename = fopen("Data.txt","wb");	
	fwrite(List,sizeof(book),num,filename);
	fclose(filename);
}

int main()
{
	struct book ListBook[100];
	int num;
	do
	{
		printf("\nNhap tong so quyen sach: ");
		scanf("%d",&num);
	}
	while (num >= 100);
	Input(ListBook,num);
	Output(ListBook,num);
	WriteFile(ListBook,num);
}

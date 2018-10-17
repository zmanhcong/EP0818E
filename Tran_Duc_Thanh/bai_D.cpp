#include<stdio.h>
FILE *p;	
struct book
{
	char name[30];
	int page;
	float price;
};
void nhapdulieu(book bk[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\n nhap ten sach bk%d: ",i+1);
		gets(bk[i].name);
		fflush(stdin);
		printf("\n nhap so trang bk%d: ",i+1);
		scanf("%d",&bk[i].page);
		printf("\n nhap gia tien bk%d: ",i+1);
		scanf("%f",&bk[i].price);
	}
		
}
void xuatdulieu(book bk[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n ten sach thu%d: %s ",i+1,bk[i].name);
		printf("\n so trang: %d",bk[i].page);
		printf("\n gia tien: %f",bk[i].price);
	}
}
void ghifile(book bk[],int n)
{
	fputs("danh sach sach: ",p);
	int i;
	for(i=0;i<n;i++)
	{
		fprintf(p,"\n ten sach thu%d: %s ",i+1,bk[i].name);
		fprintf(p,"\n so trang: %d",bk[i].page);
		fprintf(p,"\n gia tien: %f",bk[i].price);
	}
}

int main()
{
	int n;
	p=fopen("data.txt","w");
	book bk[100];
	do{
	printf("\n nhap n");
	scanf("%d",&n);
	}	while(n>100);
	nhapdulieu(bk,n);
	xuatdulieu(bk,n);
	ghifile(bk,n);
	fclose(p);
}


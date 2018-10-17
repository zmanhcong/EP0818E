#include<stdio.h>
#include<stdlib.h>
struct ds
{
	char ten[50];
	int so_trang;
	float gia;
};
main()
{
	FILE *fp;
	fp=fopen("data.txt","w");
	int n;
	ds qs[100];
	do
	{
		printf("Nhap so quyen sach muon nhap: ");
		scanf("%d",&n);
	}while(n<0||n>100);
	fflush(stdin);
	for(int i=0;i<n;i++)
	{
		printf("Nhap ten sach thu %d: ",i+1);
		gets(qs[i].ten);
		printf("Nhap so trang sach thu %d: ",i+1);
		scanf("%d",&qs[i].so_trang);
		printf("Nhap gia sach thu %d: ",i+1);
		scanf("%f",&qs[i].gia);
		fflush(stdin);
	}
	printf("Thong tin cac sach vua nhap:");
	for(int i=0;i<n;i++)
	{
		printf("\nTen sach thu %d: %s",i+1,qs[i].ten);
		printf("\nSo trang sach thu %d: %d",i+1,qs[i].so_trang);
		printf("\nGia sach thu %d: %.3f",i+1,qs[i].gia);
	}
	fprintf(fp,"Thong tin cac sach vua nhap:");
	for(int i=0;i<n;i++)
	{
		fprintf(fp,"\nTen sach thu %d: %s",i+1,qs[i].ten);
		fprintf(fp,"\nSo trang sach thu %d: %d",i+1,qs[i].so_trang);
		fprintf(fp,"\nGia sach thu %d: %.3f",i+1,qs[i].gia);
	}
}

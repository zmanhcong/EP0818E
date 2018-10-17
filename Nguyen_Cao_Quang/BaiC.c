#include <stdio.h>

typedef struct SinhVien
{
	char MaSV[20];
	char HoTen[30];
	char GioiTinh[10];
	float Diem1;
	float Diem2;
	float Diem3;
	
}SinhVien;

void main()
{
	int n;
	
	do
	{
		printf("So sinh vien muon nhap n= ");
		scanf("%d",&n);
	}
	while(n<0);
	
	SinhVien DanhSach[n];
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap vao sinh vien thu %d",i+1);
		printf("\n");
		
		printf("Ma sinh vien:");
		fflush(stdin);
		gets(DanhSach[i].MaSV);
		
		printf("Ten sinh vien:");
		fflush(stdin);
		gets(DanhSach[i].HoTen);
		
		printf("Gioi tinh:");
		fflush(stdin);
		gets(DanhSach[i].GioiTinh);
		
		do
		{
			printf("Diem mon 1= ");
			scanf("%f",&DanhSach[i].Diem1);
		}
		while((DanhSach[i].Diem1<0) || (DanhSach[i].Diem1>10));
	
		do
		{
			printf("Diem mon 2= ");
			scanf("%f",&DanhSach[i].Diem2);
		}
		while((DanhSach[i].Diem2<0) || (DanhSach[i].Diem2>10));
	
		do
		{
			printf("Diem mon 3= ");
			scanf("%f",&DanhSach[i].Diem3);
		}
		while((DanhSach[i].Diem3<0) || (DanhSach[i].Diem3>10));
	
		
	}
	
	printf("\n");
	printf("Danh sach sinh vien vua nhap:\n");
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("Ma sinh vien:%s\n",DanhSach[i].MaSV);
		printf("Ten sinh vien:%s\n",DanhSach[i].HoTen);
		printf("Gioi tinh :%s\n",DanhSach[i].GioiTinh);
		
	}
	
	float DiemTB;
	printf("\n");
	printf("Danh sach sinh vien do:\n");
	
	for(i=0;i<n;i++)
	{
		DiemTB=(DanhSach[i].Diem1+DanhSach[i].Diem2+DanhSach[i].Diem3)/3;
		if(DiemTB>=5.0)
		{
			printf("Ma sinh vien:%s\n",DanhSach[i].MaSV);
			printf("Ten sinh vien:%s\n",DanhSach[i].HoTen);
			printf("Diem trung binh:%f",DiemTB);
		}
		
		
	}
	
	
	
	
	
	
	
	
	
}

#include<stdio.h>
typedef struct sinhvien
{
	char masv[30];
	char hoten[30];
	char gt[5];
	float diem1;
	float diem2;
	float diem3;
	float diemtb;	
};
void nhapdulieu(sinhvien sv[],int n )
{
	int i;
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\n nhap ma sinh vien sv%d: ",i+1);
		gets(sv[i].masv);
		fflush(stdin);
		printf("\n nhap ho ten sv%d: ",i+1);
		gets(sv[i].hoten);
		fflush(stdin);
		printf("\n nhap gioi tinh sv%d: ",i+1);
		gets(sv[i].gt);
		fflush(stdin);
		printf("\n nhap diem mon 1 sv%d: ",i+1);
		scanf("%f",&sv[i].diem1);
		printf("\n nhap diem mon 2 sv%d: ",i+1);
		scanf("%f",&sv[i].diem2);
		printf("\n nhap diem mon 3 sv%d: ",i+1);
		scanf("%f",&sv[i].diem3);
		sv[i].diemtb=(sv[i].diem1+sv[i].diem2+sv[i].diem3)/3;
	}
}
void xuatdulieu(sinhvien sv[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n ma sinh vien sv%d: %s",i+1,sv[i].masv);
		printf("\n ho ten sinh vien sv%d: %s",i+1,sv[i].hoten);
		printf("\n gioi tinh sv%d: %s",i+1,sv[i].gt);
		printf("\n diem mon 1 sv%d: %f",i+1,sv[i].diem1);
		printf("\n diem mon 2 sv%d: %f",i+1,sv[i].diem2);
		printf("\n diem mon 3 sv%d: %f",i+1,sv[i].diem3);
		printf("\n diem tb sv%d: %f",i+1,sv[i].diemtb);
	}
	printf("\n danh sach sv do");
	for(i=0;i<n;i++)
	{
		if(sv[i].diemtb>=5)
		{
			printf("\n ma sinh vien sv%d: %s",i+1,sv[i].masv);
			printf("\n ho ten sinh vien sv%d: %s",i+1,sv[i].hoten);
			printf("\n gioi tinh sv%d: %s",i+1,sv[i].gt);
			printf("\n diem mon 1 sv%d: %f",i+1,sv[i].diem1);
			printf("\n diem mon 2 sv%d: %f",i+1,sv[i].diem2);
			printf("\n diem mon 3 sv%d: %f",i+1,sv[i].diem3);
			printf("\n diem tb sv%d: %f",i+1,sv[i].diemtb);
		}
	}
	
	
}
int main()
{
	int n;
	sinhvien sv[100];
	do{
	printf("\n nhap n");
	scanf("%d",&n);
	} while (n>100);
	nhapdulieu(sv,n);
	xuatdulieu(sv,n);
}

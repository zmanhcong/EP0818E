#include <stdio.h>
#include <iostream>

typedef struct sinhvien
{
	int masv;
	char hoten[30];
	char gioitinh[10];
	float diem1;
	float diem2;
	float diem3;
	float diemtrungbinh;
};

int main()
{
	sinhvien sv[1000];
	int n=0;

	do
	{
			printf("Nhap vao so sinh vien ban muon quan li: ");
			scanf("%d",&n);
	}
	while((n<=0)||(n>1000));
	
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Ma sinh vien thu [%d]:",i+1);
		scanf("%d",&sv[i].masv);
		fflush(stdin);
		printf("Ho va ten sinh vien thu [%d]:",i+1);
		gets(sv[i].hoten);
		printf("Gioi tinh sinh vien thu [%d]:",i+1);
		gets(sv[i].gioitinh);
		printf("Diem mon 1:");
		scanf("%f",&sv[i].diem1);
		printf("Diem mon 2:");
		scanf("%f",&sv[i].diem2);
		printf("Diem mon 3:");
		scanf("%f",&sv[i].diem3);
		sv[i].diemtrungbinh=(sv[i].diem1+sv[i].diem2+sv[i].diem3)/3;
		fflush(stdin);
		
	}
		printf("\n");
			printf("\n");
				printf("\n");
					printf("\n");
						printf("\n");
	printf("Danh sach sinh vien da nhap la:");
		printf("\n");
		for(int i=0;i<n;i++)
	{
		printf("Ma sinh vien thu [%d]:%d",i+1,sv[i].masv);
	
			printf("\n");
		printf("Ho va ten sinh vien thu [%d]:%s",i+1,sv[i].hoten);
		printf("\n");
		printf("Gioi tinh sinh vien thu [%d]:%s",i+1,sv[i].gioitinh);
		printf("\n");
		printf("Diem mon 1:%f",sv[i].diem1);
		printf("\n");
		printf("Diem mon 2:%f",sv[i].diem2);
			printf("\n");
		printf("Diem mon 3:%f",sv[i].diem3);
		printf("\n");
	}
	
		printf("Danh sach sinh vien do la:");
			printf("\n");
		for(int i=0;i<n;i++)
	{
		if(sv[i].diemtrungbinh>=5.0)
		{
			printf("Ma sinh vien thu [%d]:%d",i+1,sv[i].masv);
	
			printf("\n");
			printf("Ho va ten sinh vien thu [%d]:%s",i+1,sv[i].hoten);
		printf("\n");
			printf("Gioi tinh sinh vien thu [%d]:%s",i+1,sv[i].gioitinh);
		printf("\n");
			printf("Diem mon 1:%f",sv[i].diem1);
		printf("\n");
			printf("Diem mon 2:%f",sv[i].diem2);
			printf("\n");
			printf("Diem mon 3:%f",sv[i].diem3);
				printf("\n");
		}
	}
	
}

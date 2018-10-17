#include<conio.h>
#include<stdio.h>

typedef struct sinhvien
{
	char masv[10];
	char hoten[30];
	char gioitinh[5];
	float diem_mon_1;
	float diem_mon_2;
	float diem_mon_3;
};

int main()
{	
	unsigned int i, n;
	float diem_trung_binh;
	printf("Nhap so sinh vien:");
	scanf("%d",&n);
	fflush(stdin);
	struct sinhvien sv[n];
	for(i=0;i<n;i++)
	{
		printf("Sinh vien thu: %d",i+1);
		printf("\n  Ma sinh vien:");
		gets(sv[i].masv);
		//fflush(stdin);
		printf("\n  Ho ten sinh vien:");
		gets(sv[i].hoten);
		//fflush(stdin);
		printf("\n  Gioi tinh sinh vien:");
		gets(sv[i].gioitinh);
		//fflush(stdin);
	do{
	
			printf("\n  Diem mon 1:");
			scanf("%f",&sv[i].diem_mon_1);
			fflush(stdin);
	}
	while((sv[i].diem_mon_1<0)||(sv[i].diem_mon_1>10));
		
	do{
	
			printf("\n  Diem mon 2:");
			scanf("%f",&sv[i].diem_mon_2);
			fflush(stdin);
	}
	while((sv[i].diem_mon_2<0)||(sv[i].diem_mon_2>10));
	do{
	
			printf("\n  Diem mon 3:");
			scanf("%f",&sv[i].diem_mon_3);
			fflush(stdin);
	}
	while((sv[i].diem_mon_3<0)||(sv[i].diem_mon_3>10));;		
	}
	// in ra man hinh
	for(i=0;i<n;i++)
	{	printf("\nSinh vien thu: %d",i+1);
		printf("\n  Ma sinh vien:");
		puts(sv[i].masv);
		printf("\n  Ho ten sinh vien:");
		puts(sv[i].hoten);
		printf("\n  Gioi tinh sinh vien:");
		puts(sv[i].gioitinh);
		printf("\n  Diem mon 1:");
		printf("%f",sv[i].diem_mon_1);
		printf("\n  Diem mon 2:");
		printf("%f",sv[i].diem_mon_2);
		printf("\n  Diem mon 3:");
		printf("%f",sv[i].diem_mon_3);
	}
	// sinh vien co diem trung binh >=5.0
	for(i=0;i<n;i++)
	{
		diem_trung_binh = (float)((sv[i].diem_mon_1 + sv[i].diem_mon_2 + sv[i].diem_mon_3)/3);
		if(diem_trung_binh>=5.0)
		{	printf("\n Sinh vien co diem trung binh tren 5.0 la:");
			printf("\nMa sinh vien %s ",&sv[i].masv);	
			printf("\nHo ten  sinh vien %s ",&sv[i].hoten);
			printf("\nGioi tinh sinh vien %s ",&sv[i].gioitinh);
			printf("\n Diem trung binh la: %f",diem_trung_binh);	
		}
	}	
}

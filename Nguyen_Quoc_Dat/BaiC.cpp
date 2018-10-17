#include<stdio.h>

struct Sinhvien
{
	char ma_sv[10];
	char hoten[20];
	char gioitinh[3];
	float diem1;
	float diem2;
	float diem3;
};

int dtb(struct Sinhvien sv)
{
	return (sv.diem1+sv.diem2+sv.diem3)/3;
}

int main()
{
	int n,i;
	printf(" So sinh vien can nhap : ");
	scanf("%d",&n);
	struct Sinhvien sv[n];
	
	for( i = 0 ; i < n ; i++)
	{
		fflush(stdin);
		printf("Ma sinh vien : ");
		gets(sv[i].ma_sv);
		printf("Ho ten sinh vien : ");
		gets(sv[i].hoten);
		printf("Gioi tinh sinh vien : ");
		gets(sv[i].gioitinh);
		printf("Diem mon 1 : ");
		scanf("%f",&sv[i].diem1);
		printf("Diem mon 2 : ");
		scanf("%f",&sv[i].diem2);
		printf("Diem mon 3 : ");
		scanf("%f",&sv[i].diem3);
	}
	
	printf("Nhung sinh vien do la : ");
	for(i =0; i<n; i++)
	{
		if(dtb(sv[i]) > 5.0)
			printf("\n%s	%s",sv[i].ma_sv,sv[i].hoten );
	}
}

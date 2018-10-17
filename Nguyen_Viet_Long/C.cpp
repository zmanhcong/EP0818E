#include<stdio.h>
#include<mem.h>
#include<string.h>
#include<stdlib.h>

struct sv{
	char ma_sv[10];
	char ho_ten[30];
	char gt[10];
	float diem1;
	float diem2;
	float diem3;
	
};
struct sv TL[100];

void nhap(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d : Nhap Ma Sv:  ",i+1);
		gets(TL[i].ma_sv);
		printf("Ho ten: ");
		gets(TL[i].ho_ten);
		printf("Gioi tinh: ");
		gets(TL[i].gt);
		printf("Diem 1: ");
		scanf("%f",&TL[i].diem1);
		fflush(stdin);
		printf("Diem 2: ");
		scanf("%f",&TL[i].diem2);
		fflush(stdin);
		printf("Diem 3: ");
		scanf("%f",&TL[i].diem3);
		fflush(stdin);
		
	}
}
void in(int n)
{
	int i;
	printf("DANH SACH SINH VIEN BAN DA NHAP: ");
	for(i=0;i<n;i++)
	{
		printf("\n%d: Ma Sv:  ",i+1);
		puts(TL[i].ma_sv);
		printf("\nHo ten: ");
		puts(TL[i].ho_ten);
		printf("\nGioi tinh: ");
		puts(TL[i].gt);
		printf("\nDiem 1: %f",TL[i].diem1);
		printf("\nDiem 2: %f",TL[i].diem2);
		printf("\nDiem 3: %f",TL[i].diem3);
	}
}
void tinh(int n)
{
		int i;
		float t = 0;
		printf("\n DANH SACH SINH VIEN CO DTB LON HON 5 : ");
	for(i=0;i<n;i++)
	{
		t = (TL[i].diem1 + TL[i].diem2 + TL[i].diem3)/3;
		if( t>=5 ){
			printf("\nMa Sv:  ",i+1);
			puts(TL[i].ma_sv);
			printf("\nHo ten: ");
			puts(TL[i].ho_ten);
			printf("\nGioi tinh: ");
			puts(TL[i].gt);
			printf("\nDiem 1: %f",TL[i].diem1);
			printf("\nDiem 2: %f",TL[i].diem2);
			printf("\nDiem 3: %f",TL[i].diem3);
			printf("\nDiem TB: %f",t);
		}
	}
}

int main()
{
	int n;
	do{
		printf("Nhap so luong Sv : ");
		scanf("%d",&n);
		fflush(stdin);
	}while(n<=0 || n>100);
	nhap(n);
	in(n);
	tinh(n);
}

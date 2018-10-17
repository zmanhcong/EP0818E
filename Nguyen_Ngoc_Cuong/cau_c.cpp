#include<stdio.h>
#include<mem.h>
#include<string.h>
int sv[100];
struct sinhvien
{
	char msv[30];
	char hoten[30];
	char gioitinh[30];
	float diem1;
	float diem2;
	float diem3;
};
main()
{
	int i,t,n;
	
	struct sinhvien sv[100];
	do{
		printf("nhap vao so sinh vien :");
		scanf("%d",&n);
		fflush(stdin);
	}
	while(n<0||n>100);
	for(i=0;i<n;i++)
	{
		printf("\n msv %d:",i);
		gets(sv[i].msv);
		printf("ho ten sv %d:",i);
		gets(sv[i].hoten);
		printf("gioi tinh sv %d:",i);
		gets(sv[i].gioitinh);
		printf(" diem1 :",i);
		scanf("%f",&sv[i].diem1);
		fflush(stdin);
		printf(" diem2 :",i);
		scanf("%f",&sv[i].diem2);
		fflush(stdin);
		printf(" diem3 :",i);
		scanf("%f",&sv[i].diem3);
		fflush(stdin);
	}
	for(i=0;i<n;i++)
	{
		printf(" msv %d:",i);
		puts(sv[i].msv);
		printf("\nho ten sv %d:",i);
		puts(sv[i].hoten);
		printf("\n gioi tinh sv %d:",i);
		puts(sv[i].gioitinh);
		printf(" diem1 %f:\n",sv[i].diem1);
		printf(" diem2 %f:\n",sv[i].diem2);
		printf(" diem3 %f:\n",sv[i].diem3);
	}
	printf("nhung sv trung binh >5 :\n");
		for(i=0;i<n;i++)
	{
		t=(sv[i].diem1 + sv[i].diem2 + sv[i].diem3)/3;
		if(t>5){
		printf("\nmsv %d:",i);
		puts(sv[i].msv);
		printf("ho ten sv %d:",i);
		puts(sv[i].hoten);
		printf("gioi tinh sv %d:",i);
		puts(sv[i].gioitinh);
		}
	}

}

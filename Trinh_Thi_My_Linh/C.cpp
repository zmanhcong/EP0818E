#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ds
{
	char msv[10];
	char ho_ten[50];
	char gt[10];
	int diem1;
	int diem2;
	int diem3;
};
main()
{
	ds sv[100];
	int n,i;
	do
	{
		printf("So sinh vien muon nhap la: ");
		scanf("%d",&n);
	}while(n<0||n>100);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("Nhap ma sv thu %d: ",i+1);
		gets(sv[i].msv);
		printf("Nhap ho ten sv thu %d: ",i+1);
		gets(sv[i].ho_ten);
		printf("Nhap gioi tinh sv thu %d: ",i+1);
		gets(sv[i].gt);
		printf("Nhap diem 1 sv thu %d: ",i+1);
		scanf("%d",&sv[i].diem1);
		printf("Nhap diem 2 sv thu %d: ",i+1);
		scanf("%d",&sv[i].diem2);
		printf("Nhap diem 3 sv thu %d: ",i+1);
		scanf("%d",&sv[i].diem3);
		fflush(stdin);
	}
	for(i=0;i<n;i++)
	{
		printf("\nMa sv thu %d: %s",i+1,sv[i].msv);
		printf("\nHo ten sv thu %d: %s",i+1,sv[i].ho_ten);
		printf("\nGioi tinh sv thu %d: %s",i+1,sv[i].gt);
		printf("\nDiem 1 sv thu %d: %d",i+1,sv[i].diem1);
		printf("\nDiem 2 sv thu %d: %d",i+1,sv[i].diem2);
		printf("\nDiem 3 sv thu %d: %d",i+1,sv[i].diem3);
		printf("\n");
	}
	printf("\n");
	printf("\nTen cua cac sinh vien do:");
	for(i=0;i<n;i++)
	{
		float t=0;
		t=(float)(sv[i].diem1 + sv[i].diem2 + sv[i].diem3)/3;
		if(t>=5.0)
		{
			printf("\nMa sv thu %d: %s",i+1,sv[i].msv);
		    printf("\nHo ten sv thu %d: %s",i+1,sv[i].ho_ten);
		    printf("\nGioi tinh sv thu %d: %s",i+1,sv[i].gt);
		    printf("\nDiem 1 sv thu %d: %d",i+1,sv[i].diem1);
		    printf("\nDiem 2 sv thu %d: %d",i+1,sv[i].diem2);
		    printf("\nDiem 3 sv thu %d: %d",i+1,sv[i].diem3);
		}
	}
}

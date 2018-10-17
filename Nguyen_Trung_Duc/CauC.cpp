#include <stdio.h>
struct sinhvien
{
	char masv[12];
	char ten[30];
	char gt[4];
	float diem1,diem2,diem3;
};
int main()
{
	struct sinhvien sv[1000];
	int i,n;
	float dtb;
	do
	{
		printf("nhap n: ");
		scanf("%d",&n);
	}
	while(0>n||n>1000);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("nhap masv: ");
		gets(sv[i].masv);
		printf("nhap ten sv: ");
		gets(sv[i].ten);
		printf("nhap gioi tinh: ");
		gets(sv[i].gt);
		printf("nhap diem 1: ");
		scanf("%f",&sv[i].diem1);
		printf("nhap diem 2: ");
		scanf("%f",&sv[i].diem2);
		printf("nhap diem 3: ");
		scanf("%f",&sv[i].diem3);
	}
	printf("danh sach sv vua nhap: \n");
	for(i=0;i<n;i++)
	{
		printf("ma sv %d: %s\n",i+1,sv[i].masv);
		printf("ten sv %d: %s\n",i+1,sv[i].ten);
		printf("gioi tinh sv %d: %s\n",i+1,sv[i].gt);
		printf("diem thu 1: %0.2f\n",sv[i].diem1);
		printf("diem thu 2: %0.2f\n",sv[i].diem2);
		printf("diem thu 3: %0.2f\n",sv[i].diem3);
		dtb=(sv[i].diem1+sv[i].diem2+sv[i].diem3)/3;
		if(dtb>=5)
		{
			printf("ket qua hoc tap: do\n");
		}
	}
	
	
}

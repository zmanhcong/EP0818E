#include<stdio.h>
struct SV
{
	int msv;
	char ten[20];
	char gt[3];
	int diem1;
	int diem2;
	int diem3;	
	float tb;
};
int main()
{
	int n;
	printf ("nhap so sinh vien"); scanf("%d",&n);
	struct SV sv[n];
	for (int i = 0; i < n; i ++)
	{
		printf ("\nma so sinh vien: "); scanf("%d",&sv[i].msv);
		printf ("\nten sinh vien: "); scanf("%s",&sv[i].ten);
		printf ("\ngioi tinh sinh vien: "); scanf("%s",&sv[i].gt);
		printf ("\ndiem mon thu 1: "); scanf("%d",&sv[i].diem1);
		printf ("\ndiem mon thu 2: "); scanf("%d",&sv[i].diem2);
		printf ("\ndiem mon thu 3: "); scanf("%d",&sv[i].diem3);
	}
	printf("\ndanh sanh sinh vien vua nhap");
	for (int i = 0; i < n; i ++)
	{
		printf ("\nma so sinh vien: %d",sv[i].msv); 
		printf ("\nten sinh vien: %s",sv[i].ten); 
		printf ("\ngioi tinh sinh vien:%s",sv[i].gt);
		printf ("\ndiem mon thu 1:%d",sv[i].diem1); 
		printf ("\ndiem mon thu 2:%d",sv[i].diem2); 
		printf ("\ndiem mon thu 3:%d",sv[i].diem3);
		sv[i].tb = (sv[i].diem1+sv[i].diem2+sv[i].diem3)/3;
		printf ("\ndiem trung binh mon:%f",sv[i].tb);
	}
	printf(" nhung sinh vien co diem tren 5 la:");
	for (int i = 0; i < n; i ++)
	{
		if (sv[i].tb >=5)
			printf("%s",sv[i].ten);
	}
}

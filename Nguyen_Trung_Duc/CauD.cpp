#include <stdio.h>
struct sach
{
	char ten[50];
	int sotrang,gia;
};
int main()
{
	int i,n;
	struct sach a[100];
	FILE *fp;
	do
	{
		printf("nhap n: ");
		scanf("%d",&n);
	}
	while(0>n||n>100);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("nhap ten sach thu %d: ",i+1);
		gets(a[i].ten);
		printf("nhap so trang: ");
		scanf("%d",&a[i].sotrang);
		printf("nhap don gia: ");
		scanf("%d",&a[i].gia);
	}
	fp= fopen("KQ_CauD.txt","w+");
	for(i=0;i<n;i++)
	{
		fprintf(fp,"/nten sach %d: %s\n",i+1,a[i].ten);
		fprintf(fp,"so trang: %d\n",a[i].sotrang);
		fprintf(fp,"don gia: %d",a[i].gia);
	}
	fclose(fp);
}

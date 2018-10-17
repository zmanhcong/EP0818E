#include<stdio.h>
#include<string.h>
#include<mem.h>
int a[100];
struct sach
{
	char ten[20];
	int trang;
	float tien;	
};
main()
{
	int i,n;
	FILE * fp;
	struct sach a[100];
	do{
		printf("nhap so sach :");
		scanf("%d",&n);
		fflush(stdin);
	}	
	while(n<0||n>100);
	for(i=0;i<n;i++)
	{
		printf("nhap ten sach %d:",i);
		gets(a[i].ten);
		printf("nhap vao so trang sach %d:",i);
		scanf("%d",&a[i].trang);
		fflush(stdin);
		printf("nhap vao tien sach :",i);
		scanf("%f",&a[i].tien);
		fflush(stdin);
		
	}
	printf("\nso sach da nhap:");
	
	for(i=0;i<n;i++)
	{
		printf("\nten sach :",a[i].ten);
		puts(a[i].ten);
		printf("so trang sach :%d",a[i].trang);
		printf("\ntien sach :%.2f\n",a[i].tien);
		
	}
	fp = fopen("sach.txt","w");
	fprintf(fp,"thong tin sach da nhap");
	for(i=0;i<n;i++)
	{
		fprintf(fp,"\nten sach :",a[i].ten);
		fputs(a[i].ten,fp);
		fprintf(fp,"\nso trang sach :%d",a[i].trang);
		fprintf(fp,"\ntien sach :%.2f",a[i].tien);
		
	}
	
	
}


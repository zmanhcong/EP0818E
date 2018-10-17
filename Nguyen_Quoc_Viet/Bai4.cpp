#include <stdio.h>
#include <iostream>

typedef struct book
{
	int sotrang;
	char ten[30];
	int giatien;
	
};

int main()
{
	book b[1000];
	int n=0;

	do
	{
			printf("Nhap vao so sach ban muon quan li: ");
			scanf("%d",&n);
	}
	while((n<=0)||(n>1000));
	
		for(int i=0;i<n;i++)
	{
		
		fflush(stdin);
		printf(" Ten quyen sach thu [%d]:",i+1);
		gets(b[i].ten);
		fflush(stdin);
		printf("So trang:");
		scanf("%d",&b[i].sotrang);
		fflush(stdin);
		printf("Gia tien: ");
		scanf("%d",&b[i].giatien);
		fflush(stdin);
		
	}
	printf("\n");
	printf("\n");
	printf("\n");
	
	printf("Danh sach ban vua nhap la:");
	printf("\n");
		for(int i=0;i<n;i++)
	{
		
	
		printf(" Ten quyen sach thu [%d]:%s",i+1,b[i].ten);
		printf("\n");
		
		printf("So trang:%d",b[i].sotrang);
	printf("\n");
		printf("Gia tien: %d",b[i].giatien);
	printf("\n");
		
	}

	
	FILE *fp;
	fp=fopen("data.txt","w+");
			for(int i=0;i<n;i++)
	{
		
	
		fprintf(fp," Ten quyen sach thu [%d]:%s",i+1,b[i].ten);
		fprintf(fp,"\n");
		fprintf(fp,"So trang:%d",b[i].sotrang);
		fprintf(fp,"\n");
		fprintf(fp,"Gia tien: %d",b[i].giatien);
		fprintf(fp,"\n");
		
	}
	fclose(fp);
	
}

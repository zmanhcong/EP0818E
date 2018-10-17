#include<stdio.h>
#include<conio.h>
#include <mem.h>
#include <stdlib.h>
typedef struct sach{
	char ten[20];
	unsigned int page;
	float tien;
};
int main()
{	char buff[255];
	int i, n;
	FILE *fp;
	
	do
	{
		printf("Nhap mang n:");
		scanf("%d",&n);
	}
	while(n>=100);
	
	struct sach book[n];
	
	for(i=0;i<n;i++)
	{
		printf("\n Quyen sach thu %d:", i+1);
		fflush(stdin);
		printf("\n Ten sach:");
		gets(book[i].ten);
		fflush(stdin);
		printf("\n So trang:");
		scanf("%d",&book[i].page);
		fflush(stdin);
		printf("\n Gia tien:");
		scanf("%f",&book[i].tien);
		fflush(stdin);	
	}
	
	
	
	// ghi vao file
	fp = fopen("data.txt","w");

	for(i=0;i<n;i++)
	{	
		fprintf(fp,"\nTen sach:");
		fputs(book[i].ten,fp);
		fflush(stdin);
	 	fprintf(fp,"\nso trang sach: %d",book[i].page);
		fprintf(fp,"\ngia tien sach: %f", book[i].tien );
	}	
	fclose(fp);
}

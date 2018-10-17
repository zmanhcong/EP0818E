#include<stdio.h>
#include<stdlib.h>

struct Book
{
	char ten[20];
	int trang;
	int gia_tien;
};

int main()
{
	int i,n;
	printf("Nhap so quyen sach : ");
	scanf("%d",&n);
	struct Book book[n];
	
	for( i =0; i< n; i++)
	{
		fflush(stdin);
		printf("Ten sach : ");
		gets(book[i].ten);
		printf("So trang : ");
		scanf("%d",&book[i].trang);
		printf("Gia tien ; ");
		scanf("%d",&book[i].gia_tien);
	}
	
	FILE*sach;
	sach = fopen("data.txt","wb");
	for( i = 0; i < n; i++)
	{
		fwrite(&book[i],sizeof(struct Book),1,sach);
	}
	fclose(sach);
	
	sach = fopen("data.txt","rb");
	for( i = 0; i < n; i++)
	{
		fread(&book[i],sizeof(struct Book),1,sach);
	}
	fclose(sach);
	
}

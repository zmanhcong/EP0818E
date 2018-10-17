#include<stdio.h>
struct sach
{
	char ten[20];
	int trang;
	int gia;	
};
int main()
{
	int n;
	printf (" nhap so luong sach "); scanf("%d", &n);
	struct sach book[n];
	for (int i = 0; i < n; i ++)
	{
		printf(" \nnhap quyen thu %d",i+1);
		printf (" \nnhap ten sach "); scanf("%s", &book[i].ten);
		printf (" \nnhap so trang "); scanf("%d", &book[i].trang);
		printf (" \nnhap gia sach "); scanf("%d", &book[i].gia);	
	}
	printf("\n danh sach nhung quyen sach vua nhap la:");
	for (int i = 0; i < n; i ++)
	{
		printf(" \nnhap quyen thu %d",i+1);
		printf (" \n ten sach :%s",book[i].ten); 
		printf (" \nso trang :%d",book[i].trang); 
		printf (" \ngia sach :%d",book[i].gia); 
	}
	FILE *fileout;
	fileout = fopen("data.txt","w");
	for (int i = 0; i < n; i ++)
	{
		fprintf(fileout," \nnhap quyen thu %d",i+1);
		fprintf (fileout," \n ten sach :%s",book[i].ten); 
		fprintf (fileout," \nso trang :%d",book[i].trang); 
		fprintf (fileout," \ngia sach :%d",book[i].gia); 
	}
	fclose;
}

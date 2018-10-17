#include<stdio.h>
#include<mem.h>
#include<stdlib.h>
struct qs{
	char ten[30];
	int so_trang;
	int gia_tien;
};
struct qs TL[100];
void nhap(int n)
{
	int i;
	for(i =0 ;i<n;i++)
	{
		printf("Ten sach %d: ",i+1);
		gets(TL[i].ten);
		printf("So trang: ");
		scanf("%d",&TL[i].so_trang);
		fflush(stdin);
		printf("Gia tien : ");
		scanf("%d",&TL[i].gia_tien);
		fflush(stdin);
	}
}
void in(int n)
{
	int i;
	printf("Danh sach ban da nhap: ");
	for(i =0 ;i<n;i++)
	{
		printf("\nTen sach %d: ",i+1);
		puts(TL[i].ten);
		printf("\nSo trang: %d",TL[i].so_trang);
		printf("\nGia tien : %d",TL[i].gia_tien);
	}
}
void xuatfile(int n)
{
	int i;
	FILE *fp;
	fp = fopen("data.txt","w");
	fprintf(fp,"Danh sach ban da nhap: ");
	for(i =0 ;i<n;i++)
	{
		fprintf(fp,"\nTen sach %d: ",i+1);
		fputs(TL[i].ten,fp);
		fprintf(fp,"\nSo trang: %d",TL[i].so_trang);
		fprintf(fp,"\nGia tien : %d",TL[i].gia_tien);
	}
}
int main()
{
	int n;
	do{
		printf("Nhap so luong sach : ");
		scanf("%d",&n);
		fflush(stdin);
	}while(n<=0 || n>100);
	nhap(n);
	in(n);	
	xuatfile(n);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct quyensach
{
	char ten[31];
	int sotrang;
	int giatien;
};
typedef struct quyensach QUYENSACH;
void Nhap(QUYENSACH &sv)
{

	do {
		fflush(stdin);
		printf("\nNhap Ten quyen sach: ");
		gets(sv.ten);
		if (strlen(sv.ten) > 30)
		{
			printf("\nTen vuot qua 30 ki tu.Vui long nhap lai!");

		}
	} while (strlen(sv.ten) > 30);
	printf("\nNhap so trang: ");
	scanf("%d", &sv.sotrang);
	printf("\nNhap gia tien: ");
	scanf("%d", &sv.giatien);
}
void Xuat(QUYENSACH sv)
{
	printf("\nTen sach: %s", sv.ten);
	printf("\nSo trang: %d", sv.sotrang);
	printf("\nGia tien: %d", sv.giatien);
}
void Ghi(QUYENSACH sv,FILE *FileOut)
{
	fprintf(FileOut,"\nTen sach: %s", sv.ten);
	fprintf(FileOut, "\nSo trang: %d", sv.sotrang);
	fprintf(FileOut, "\nGia tien: %d", sv.giatien);
}
void NhapDS(QUYENSACH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n\t\tNhap quyen thu %d", i + 1);
		Nhap(a[i]);
	}
}
void XuatDS(QUYENSACH a[], int n)
{	
	printf("\n\t\t\tDANH SACH VUA NHAP");
	for (int i = 0; i < n; i++)
	{
		printf("\n\t\tQuyen sach thu %d", i + 1);
		Xuat(a[i]);
	}
}
void GhiDS(QUYENSACH a[], int n,FILE *FileOut)
{
	for (int i = 0; i < n; i++)
	{
		fprintf(FileOut,"\n\t\tQuyen sach thu %d", i + 1);
		Ghi(a[i],FileOut);
	}
}
int main()
{
	QUYENSACH a[100];
	int n;
	do
	{
		printf("\nNhap so quyen sach: ");
		scanf("%d", &n);
		if (n > 100)
		{
			printf("\nNhap qua 100 quyen sach so phep. Vui long nhap lai!");
		}

	} while (n>100);
	system("cls");
	NhapDS(a, n);
	XuatDS(a, n);
	FILE *FileOut;
	FileOut = fopen("data.txt", "w");
	GhiDS(a, n, FileOut);
	fclose(FileOut);

}

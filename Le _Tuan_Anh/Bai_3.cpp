#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sinhvien
{
	char masv[16];
	char hoten[31];
	char gioitinh[6];
	float diemmon1;
	float diemmon2;
	float diemmon3;
	float diemtb()
	{
		return (diemmon1 + diemmon2 + diemmon3) / 3;
	}
};
typedef struct sinhvien SINHVIEN;
void NhapSV(SINHVIEN &sv)
{
	do {
		fflush(stdin);
		printf("\nNhap ma so sv: ");
		gets(sv.masv);
		if (strlen(sv.masv) > 15)
		{
			printf("\nMa so <=15 ki tu.Vui long nhap lai!");

		}
	} while (strlen(sv.masv) > 15);

	do {
		fflush(stdin);
		printf("\nNhap ho ten sv: ");
		gets(sv.hoten);
		if (strlen(sv.hoten) > 30)
		{
			printf("\nHo ten <=30 ki tu.Vui long nhap lai!");

		}
	} while (strlen(sv.hoten) > 30);
	do {
		printf("\nNhap gioi tinh sv: ");
		gets(sv.gioitinh);
		if (strlen(sv.gioitinh) > 5)
		{
			printf("\nGioi tinh <=5 ki tu.Vui long nhap lai!");

		}
	} while (strlen(sv.gioitinh) > 5);
	do {
		printf("\nNhap diem mon 1: ");
		scanf("%f", &sv.diemmon1);
		if (sv.diemmon1 <0||sv.diemmon1>10)
		{
			printf("\n 0<= Diem mon 1 <=10 .Vui long nhap lai!");

		}
	} while (sv.diemmon1 <0 || sv.diemmon1>10);
	
	do {
		printf("\nNhap diem mon 2: ");
		scanf("%f", &sv.diemmon2);
		if (sv.diemmon2 <0 || sv.diemmon2>10)
		{
			printf("\n 0<= Diem mon 2 <=10 .Vui long nhap lai!");

		}
	} while (sv.diemmon2 <0 || sv.diemmon2>10);
	
	do {
		printf("\nNhap diem mon 3: ");
		scanf("%f", &sv.diemmon3);

		if (sv.diemmon3 <0 || sv.diemmon3>10)
		{
			printf("\n 0<= Diem mon 2 <=10 .Vui long nhap lai!");

		}
	} while (sv.diemmon3 <0 || sv.diemmon3>10);
	
}
void XuatSV(SINHVIEN sv)
{
	printf("\nMa SV: %s", sv.masv);
	printf("\nHo ten: %s", sv.hoten);
	printf("\nGioi tinh: %s", sv.gioitinh);
	printf("\nDiem mon 1: %0.1f", sv.diemmon1);
	printf("\nDiem mon 2: %0.1f", sv.diemmon2);
	printf("\nDiem mon 3: %0.1f", sv.diemmon3);
	printf("\nDiem TB: %0.1f", sv.diemtb());
}
void NhapDSSV(SINHVIEN *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n\t\tNhap sinh vien thu %d", i + 1);
		NhapSV(a[i]);
	}
}
void XuatDSSV(SINHVIEN *a, int n)
{
	printf("\n\t\t\tSINH VIEN DA NHAP:");
	for (int i = 0; i < n; i++)
	{
		printf("\n\t\tSinh vien thu %d", i + 1);
		XuatSV(a[i]);
	}
}
void SinhVienTrenTB(SINHVIEN *a, int n)
{
	printf("\n\t\t\tSINH VIEN CO DIEM TB >=5:");
	for (int i = 0; i < n; i++)
	{

		if (a[i].diemtb() >= 5)
		{
			printf("\n\t\tSinh vien thu %d:", i + 1);
			XuatSV(a[i]);

		}
	}
}
int main()
{
	int n;
	printf("\nNhap so luong sv: ");
	scanf("%d", &n);
	system("cls");
	SINHVIEN *a = new SINHVIEN[n];
	NhapDSSV(a, n);
	system("cls");
	XuatDSSV(a, n);
	SinhVienTrenTB(a, n);
	delete a;
}

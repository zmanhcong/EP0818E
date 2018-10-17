#include<stdio.h>
// ham nhap so luong sinh vien n
void Ham_Nhap_N(int &n)
{
	// bat loi nhap n
	do
	{
		printf("\nNhap vao so luong sinh vien: ");
		scanf("%d", &n);
		if(n<=0 || n>100)
		{
			printf("\nSo luong sinh vien > 0 va < 100. Moi nhap lai!");
		}
	}while(n<=0 || n>100);
}
// ham tinh do dai
int Leng(char a[])
{
	int n=0;
	while(a[n] != '\0')	n++;
	return n;
}
// khai bao struct sinh vien
struct sinhvien
{
	char mssv[10];
	char hoten[30];
	char gioitinh[5];
	float diem1;
	float diem2;
	float diem3;
};
typedef struct sinhvien sinhvien;

// ham nhap thong tin 1 sinh vien
void Ham_Nhap_Thong_Tin_1_Sinh_Vien(sinhvien &sv)
{
	// bat loi nhap thong tin sinh vien
	do
	{
		printf("\nNhap vao ma so sinh vien: ");
		scanf("%s", &sv.mssv);
		printf("\nNhap vao ho ten sinh vien: ");
		scanf("%s", &sv.hoten);
		printf("\nNhap vao gioi tinh sinh vien: ");
		scanf("%s", &sv.gioitinh);
		printf("\nNhap vao diem mon 1 cua sinh vien: ");
		scanf("%f", &sv.diem1);
		printf("\nNhap vao diem mon 2 cua sinh vien: ");
		scanf("%f", &sv.diem2);
		printf("\nNhap vao diem mon 3 cua sinh vien: ");
		scanf("%f", &sv.diem3);
		if(Leng(sv.mssv) < 1 || Leng(sv.mssv) > 10 || Leng(sv.hoten) < 1 || Leng(sv.hoten) > 30 || Leng(sv.gioitinh) < 1 || Leng(sv.gioitinh) > 5 || sv.diem1 < 0 || sv.diem1 > 10|| sv.diem2 < 0 || sv.diem2 > 10 || sv.diem3 < 0 || sv.diem3 > 10)
		{
			printf("\nMa so sinh vien > 0 va < 10 ky tu, ho ten sinh vien > 0 va < 30 ky tu, gioi tinh sinh vien > 0 va < 5, diem cac mon > 0 va < 10. Moi nhap lai thong tin sinh vien dang nhap!");
		}
	}while(Leng(sv.mssv) < 1 || Leng(sv.mssv) > 10 || Leng(sv.hoten) < 1 || Leng(sv.hoten) > 30 || Leng(sv.gioitinh) < 1 || Leng(sv.gioitinh) > 5 || sv.diem1 < 0 || sv.diem1 > 10|| sv.diem2 < 0 || sv.diem2 > 10 || sv.diem3 < 0 || sv.diem3 > 10);
	
}
// ham nhap danh sach sinh vien
void Ham_Nhap_Danh_Sach_Sinh_Vien(sinhvien sv[], int n)
{
	printf("\n\n\t\tMOI NHAP THONG TIN SINH VIEN\n");
	for(int i=0; i<n; i++)
	{
		printf("\n\nNhap thong tin sinh vien thu %d: \n", i+1);
		Ham_Nhap_Thong_Tin_1_Sinh_Vien(sv[i]);
	}
}
// ham xuat 1 sinh vien
void Ham_Xuat_1_Sinh_Vien(sinhvien sv)
{
	printf("\nMa so sinh vien: %s", sv.mssv);
	printf("\nHo ten sinh vien: %s", sv.hoten);
	printf("\nGioi tinh sinh vien: %s", sv.gioitinh);
	printf("\nDiem mon 1 cua sinh vien: %f", sv.diem1);
	printf("\nDiem mon 2 cua sinh vien: %f", sv.diem2);
	printf("\nDiem mon 3 cua sinh vien: %f", sv.diem3);
}
// ham xuat danh sach sinh vien
void Ham_Xuat_Danh_Sach_Sinh_Vien(sinhvien sv[], int n)
{
	printf("\n\n\t\tTHONG TIN SINH VIEN DA NHAP\n");
	for(int i=0; i<n; i++)
	{
		printf("\n\nThong tin sinh vien thu %d: \n", i+1);
		Ham_Xuat_1_Sinh_Vien(sv[i]);
	}
}

// ham tim sinh vien do
void Ham_Tim_Sinh_Vien_Do(sinhvien sv[], int n)
{
	printf("\n\n\t\tDANH SACH SINH VIEN DO(DTB >= 5)\n");
	for(int i=0; i<n; i++)
	{
		int DTB = ( sv[i].diem1 + sv[i].diem2 + sv[i].diem3 )/3;
		if(DTB >= 5)
		{
			Ham_Xuat_1_Sinh_Vien(sv[i]);
		}
	}
}

// ham main
int main()
{
	sinhvien sv[100];
	int n;
	Ham_Nhap_N(n);
	Ham_Nhap_Danh_Sach_Sinh_Vien(sv,n);
	Ham_Xuat_Danh_Sach_Sinh_Vien(sv,n);
	Ham_Tim_Sinh_Vien_Do(sv, n);
	
	return 0;
}

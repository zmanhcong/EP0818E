#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GIOI_HAN_MA_SV 6 //So ki tu toi da cua moi ma sinh vien.
#define DIEM_TOI_DA 10 //Thang diem. VD: 10, 20, 100, ...
#define DIEM_TOI_THIEU 0 //Diem toi thieu: thuong la 0.
#define SO_SV_GIOI_HAN 50 //So sinh vien toi da cua mot lop.

typedef struct sv
{
	char ma[GIOI_HAN_MA_SV];
	char hoTen[50];
	int gioiTinh; //Nhan 1 de chon Nam va 2 de chon Nu.
	float diemMon1;
	float diemMon2;
	float diemMon3;
} sv;

void nhap(int *n);
void nhapDSsinhvien(sv sinhvien[], int n);
void timsinhvien(sv sinhvien[], int n);

int main(int argc, char *argv[])
{
	int n, dem;
	
	//Nhap so sinh vien can dien thong tin
	nhap(&n);
	
	sv sinhvien[n];
	
	//Nhap thong tin cho moi sinh vien
	nhapDSsinhvien(sinhvien, n);
	
	//Tim sinh vien co diem trung binh lon hon hoac bang 5.0
	timsinhvien(sinhvien,n);
	
	return 0;
}

void nhap(int *n)
{
	int svMax = SO_SV_GIOI_HAN;
    do
	{
	printf("Nhap so sinh vien \n(CHU Y: KHONG DUOC NHAP QUA SO SINH VIEN GIOI HAN LA %d SINH VIEN): ", svMax);
	scanf("%d", n);
    }while((*n) >= SO_SV_GIOI_HAN);
}

void nhapDSsinhvien(sv sinhvien[], int n)
{
	printf("\n****NHAP THONG TIN SINH VIEN***\n\n");
	int dem;
	for(dem = 0; dem < n; dem++)
	{
		printf("Nhap ma sinh vien thu %d: ", dem + 1);
		fflush(stdin);
		gets(sinhvien[dem].ma);
		
		printf("Nhap ho va ten sinh vien thu %d: ", dem + 1);
		fflush(stdin);
		gets(sinhvien[dem].hoTen);
		
		do
		{
		printf("Nhap gioi tinh sinh vien \n(Nhap '1' neu sinh vien co gioi tinh nam \nNhap '2' neu sinh vien co gioi tinh nu)\nBan nhap: ");
		scanf("%d", &sinhvien[dem].gioiTinh);	
		}while (sinhvien[dem].gioiTinh != 1 && sinhvien[dem].gioiTinh != 2);
		
		do
		{
		printf("Nhap diem bo mon thu nhat cua sinh vien thu %d: ", dem + 1);
		scanf("%f", &sinhvien[dem].diemMon1);
	    }while(sinhvien[dem].diemMon1 >DIEM_TOI_DA || sinhvien[dem].diemMon1 < DIEM_TOI_THIEU);

		do
		{
		printf("Nhap diem bo mon thu hai cua sinh vien thu %d: ", dem + 1);
		scanf("%f", &sinhvien[dem].diemMon2);
	    }while(sinhvien[dem].diemMon2 > DIEM_TOI_DA || sinhvien[dem].diemMon2 < DIEM_TOI_THIEU);
	    
		do
		{
		printf("Nhap diem bo mon thu ba cua sinh vien thu %d: ", dem + 1);
		scanf("%f", &sinhvien[dem].diemMon3);
	    }while(sinhvien[dem].diemMon3 > DIEM_TOI_DA || sinhvien[dem].diemMon3 < DIEM_TOI_THIEU);
	}
}

void timsinhvien(sv sinhvien[], int n)
{
	printf("\n***THONG TIN SINH VIEN CO DIEM TRUNG BINH LON HON HOAC BANG 5.0***\n");
	int dem;
	for(dem = 0; dem < n; dem++)
	{
		if((sinhvien[dem].diemMon1 + sinhvien[dem].diemMon2 + sinhvien[dem].diemMon3)/3 >= 5)
		{
			printf("Sinh vien thu %d trong danh sach: \n", dem + 1);
			printf("+) Ma sinh vien: %s.\n", sinhvien[dem].ma);
			printf("+) Ho va ten cua sinh vien: %s.\n", sinhvien[dem].hoTen);
			printf("+) Gioi tinh sinh vien: ");
			if(sinhvien[dem].gioiTinh == 1)
			{
				printf("nam.\n");
			}
			else
			{
				printf("nu.\n");
			}
			printf("+) Diem bo mon thu nhat: %f.\n", sinhvien[dem].diemMon1);
			printf("+) Diem bo mon thu hai: %f.\n", sinhvien[dem].diemMon2);
			printf("+) Diem bo mon thu ba: %f.\n", sinhvien[dem].diemMon3);
		}
	}
}




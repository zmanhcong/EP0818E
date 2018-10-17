#include<stdio.h>

// ham tinh do dai
int Leng(char a[])
{
	int n=0;
	while(a[n] != '\0')	n++;
	return n;
}

// khai bao struct sach
struct sach
{
	char ten[50];
	int trang;
	int tien;
};
typedef struct sach sach;
//ham nhap so luong quyen sach
void Ham_Nhap_N(int &n)
{ 
	//bat loi nhap n 
	do
	{
		printf("\nNhap vao so luong quyen sach: ");
		scanf("%d", &n);
		if(n<=0 || n>100)
		{
			printf("\nSo luong quyen sach > 0 va < 100. Moi nhap lai!");
		}
	}while(n<=0 || n>100);	
}
// Ham nhap thong tin 1 quyen sach
void Ham_Nhap_Thong_Tin_1_Quyen_Sach(sach &s)
{
	// bat loi nhap thong tin sach
	do
	{
		printf("\nNhap vao ten sach: ");
		scanf("%s", &s.ten);
		printf("\nNhap vao so trang sach: ");
		scanf("%d", &s.trang);
		printf("\nNhap vao gia tien: ");
		scanf("%d", &s.tien);
		if(Leng(s.ten) <= 0 || Leng(s.ten) > 50 || s.trang < 1 || s.tien < 1)
		{
			printf("\nTen sach > 0 va < 50 ky tu, so trang > 0, gia tien >0. Moi nhap lai thong tin quyen sach dang nhap!");
		}
	}while(Leng(s.ten) <= 0 || Leng(s.ten) > 50 || s.trang < 1 || s.tien < 1);
	
}
// ham nhap danh sach quyen sach
void Ham_Nhap_Danh_Sach(sach s[], int n)
{
	printf("\n\n\t\tMOI NHAP VAO THONG TIN SACH\n\n");
	for(int i=0; i<n; i++)
	{
		printf("\nNhap vao thong tin quyen sach thu %d\n", i+1);
		Ham_Nhap_Thong_Tin_1_Quyen_Sach(s[i]);
	}
	
}
// ham xuat danh sach quyen sach
void Ham_Xuat_Danh_Sach(sach s[], int n)
{
	printf("\n\n\t\tDANH SACH SACH VUA NHAP\n\n");
	for(int i=0; i<n; i++)
	{
		printf("\nThong tin sach thu %d:\n", i+1);
		printf("\nTen sach: %s", s[i].ten);
		printf("\nSo trang sach: %d", s[i].trang);
		printf("\nGia tien sach: %d", s[i].tien);
	}
	
}
// ham ghi vao file
void Ghi_File(FILE *f, sach s[], int n)
{
	fprintf(f,"\t\tDANH SACH CAC QUYEN SACH\n");
	for(int i=0; i<n; i++)
	{
		fprintf(f, "Sach thu %d: ten: %s,\t so trang: %d,\t gia tien: %d\n", i+1, s[i].ten, s[i].trang, s[i].tien);
	}
	printf("\n\n\t\tDa ghi file data.txt. Moi kiem tra!");
}

// ham main
int main()
{
	sach s[100];
	int n;
	Ham_Nhap_N(n);
	
	Ham_Nhap_Danh_Sach(s,n);
	Ham_Xuat_Danh_Sach(s,n);
	FILE *f;
	f = fopen("data.txt", "w");
	Ghi_File(f,s,n);
	
	fclose(f);
	return 0;
}

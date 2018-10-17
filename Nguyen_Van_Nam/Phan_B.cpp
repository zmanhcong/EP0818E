#include<stdio.h>

// ham tim do dai xau
int Leng(char a[])
{
	int n=0;
	while(a[n] != '\0')	n++;
	return n;
}
// ham nhap 
void Ham_Nhap(char a[])
{
	//bat loi nhap
	do
	{
		printf("\nNhap vao xau ky tu: ");
		gets(a);
	}while(Leng(a) == 0 || Leng(a)>100);
	printf("\nDo dai xau ky tu vua nhap: %d", Leng(a));
}
// ham chuan hoa chuoi(xoa khoang trang)
void Xoa_Khoang_Trang(char a[], int &n)
{
	for(int i=0; i<n-1; i++)
	{
		if(a[i] == ' ')
		{
			while(a[i+1] == ' ')
			{
				for(int j =i+1; j<n; j++)
				{
					a[j-1] = a[j];
				}
				a[n] = '\0';
				n--;
			}
		}
	}
}
// ham xoa khoang trang o dau
void Xoa_Dau(char a[], int &n)
{
	if(a[0] == ' ')
	{
	
		for(int i=1; i<n; i++)
		{
			a[i-1] = a[i];
		}
		n--;
		a[n] = '\0';
	}
}
// ham xoa khoang trang o dau
void Xoa_Cuoi(char a[], int &n)
{
	if(a[n] == ' ')
	{
		a[n] = '\0';
		n--;
	}
}


// ham tim chu viet thuong, hoa, chu so, so tu
void Tim_So_Luong(char a[])
{
	int thuong=0;
	int hoa=0;
	int so=0;
	int tu=0;
	
	for(int i=0; i< Leng(a); i++)
	{
		//tim chu viet thuong
		if(a[i]>= 97 && a[i] <= 122)
		{
			thuong++;
		}
		//tim chu viet hoa
		if(a[i]>= 65 && a[i] <= 90)
		{
			hoa++;
		}
		//tim chu so
		if(a[i]>= 48 && a[i] <= 57)
		{
			so++;
		}
		//tim so tu
		if(a[i] == ' ')
		{
			tu++;
		}
	}
	printf("\n\n\t\t SO LUONG CAC KY TU TRONG XAU DA NHAP:\n");
	printf("\nSo luong chu cai viet hoa la: %d", hoa);
	printf("\nSo luong chu cai viet thuong la: %d", thuong);
	printf("\nSo luong chu  so la: %d", so);
	printf("\nSo luong tu la: %d", tu+1);
}

// ham main
int main()

{
	char a[100];
	Ham_Nhap(a);
	int n = Leng(a);
	Xoa_Khoang_Trang(a, n);
	Xoa_Dau(a,n);
	Xoa_Cuoi(a,n);
	printf("\nXau sau khi chuan hoa: %s", a);
	Tim_So_Luong(a);
	
	return 0;
}

#include<stdio.h>

// ham nhap 3 so a, b, c
void Ham_Nhap(int a[])
{
	// bat loi nhap
	do
	{
		printf("\nNhap vao gia tri a: ");
		scanf("%d",&a[0]);
		printf("\nNhap vao gia tri b: ");
		scanf("%d",&a[1]);
		printf("\nNhap vao gia tri c: ");
		scanf("%d",&a[2]);
		if(a[0]<=0 || a[1]<=0 || a[2]<=0)
		{
			printf("\na, b, c la 3 so nguyen duong. Moi nhap lai!");
		}
		
	}while(a[0]<=0 || a[1]<=0 || a[2]<=0);
}
// ham xuat 3 so nguyen vua nhap
void Xuat(int a[])
{
	printf("\n\n\t\t BA SO NGUYEN DUONG VUA NHAP LA:\n");
	printf("\nSo nguyen duong a = %d", a[0]);
	printf("\nSo nguyen duong b = %d", a[1]);
	printf("\nSo nguyen duong c = %d", a[2]);
	
}
// ham tim max
void Tim_Max(int a[])
{
	int max = a[0];
	for(int i=0; i<3; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	printf("\n\n\nGia tri lon nhat trong 3 so vua nhap la: %d\n\n",max);
}

// ham main
int main()
{
	unsigned int a[3];
	Ham_Nhap(a);
	Xuat(a);
	Tim_Max(a);
	
	return 0;
}

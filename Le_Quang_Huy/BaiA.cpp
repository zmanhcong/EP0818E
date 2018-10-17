#include <stdio.h>


int FindMax(int a,int b,int c)
{
	int max;
	max = a;
	if (max<b)
	max = b;
	if (max<c)
	max = c;
	return max;
}

int main()
{
	int a,b,c;
	do
	{
		printf("Nhap so nguyen duong a: ");
		scanf("%d", &a);
		printf("Nhap so nguyen duong b: ");
		scanf("%d", &b);
		printf("Nhap so nguyen duong c: ");
		scanf("%d", &c);
	}
	while ((a < 0) || (b < 0) || (c < 0));
	printf("3 so vua nhap la:");
	printf("\na = %d",a);
	printf("\nb = %d",b);
	printf("\nc = %d",c);
	printf("\nSo lon nhat trong 3 so la: %d",FindMax(a,b,c));
}

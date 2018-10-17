#include <stdio.h>

int main()
{
	unsigned int a,b,c;
	printf("nhap so nguyen duong 1: ");
	scanf("%d",&a);
	printf("nhap so nguyen duong 2: ");
	scanf("%d",&b);
	printf("nhap so nguyen duong 3: ");
	scanf("%d",&c);
	printf("3 so vua nhap: %d %d %d\n",a,b,c);
	if(a>b&&a>c)
	printf("so lon nhat la: %d",a);
	if(b>a&&b>c)
	printf("so lon nhat la: %d",b);
	if(c>b&&c>a)
	printf("so lon nhat la: %d",c);
}

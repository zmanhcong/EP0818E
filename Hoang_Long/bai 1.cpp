#include <stdio.h>
int main()
{
	int a, b, c;
	printf ("nhap vao 3 so nguyen ");
	printf("\nnhap vao so thu 1:"); scanf ("%d",&a);
	printf("\nnhap vao so thu 2:"); scanf ("%d",&b);
	printf("\nnhap vao so thu 3:"); scanf ("%d",&c);
	
	printf("\nba so vua nhap la: a = %d; b = %d; c = %d", a, b, c);
	
	int max = a;
	if ( b > max)
		b = max;
	if ( c > max)
		c = max;	
	printf (" so lon nhat trong 3 so la %d", max);
}

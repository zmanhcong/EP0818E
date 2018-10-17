#include<stdio.h>
main()
{
	int a,b,c;
	do
	{
		printf("Nhap a= ");
		scanf("%d",&a);
		printf("Nhap b= ");
		scanf("%d",&b);
		printf("Nhap b= ");
		scanf("%d",&c);
	}while(a<0||b<0||c<0);
	printf("Ba so a, b, c lan luot la: %d, %d, %d",a,b,c);
	int max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	printf("\nSo lon nhat trong 3 so la: %d",max);
}

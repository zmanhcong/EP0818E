#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("\n nhap vao 3 so");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n 3 so vua nhap la: %d %d %d",a,b,c);
	max=a;
	if(max<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	printf("\n gia tri lon nhat la: %d", max);
	
}

#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c, max;
	
	do
	{
	printf("Nhap so a:");
	scanf("%d",&a);
	}while(a<0);
	
	do
	{
	printf("Nhap so b:");
	scanf("%d",&b);
	}while(b<0);
	
	do
	{
	printf("Nhap so c:");
	scanf("%d",&c);
	}while(c<0);
		
	printf ("So a: %d . So b:%d . So c: %d",a,b,c);
	
	max=a;
	if(max<b)
	{
		max = b;
		if(max<c)
		{
		max =c ;
		}
	}
	
	printf("So lon nhat la: %d ", max);

}

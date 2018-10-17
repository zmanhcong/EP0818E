#include<stdio.h>

int max(int a,int b,int c)
{
	int max;
	max = a;
	if (max <b)
		max = b;
	if(max <c)
		max = c;
	return max;
}

int main()
{
	int a,b,c;
	
	do 
	{
		printf(" Nhap so nguyen duong a : ");
		scanf("%d",&a);
	}while(a <0);
	
	do 
	{
		printf(" Nhap so nguyen duong b : ");
		scanf("%d",&b);
	}while(b <0);
	
	do 
	{
		printf(" Nhap so nguyen duong c : ");
		scanf("%d",&c);
	}while(c <0);
	
	
	printf("Gia tri lon nhat la : %d",max(a,b,c));
}

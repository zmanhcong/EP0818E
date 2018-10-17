#include <stdio.h>

void main()
{
	int a,b,c;
	
	do
	{
		printf("Nhap vao sao nguyen duong a= ");
		scanf("%d",&a);
	}
	while(a<0);
	
	do
	{
		printf("Nhap vao sao nguyen duong b= ");
		scanf("%d",&b);
	}
	while(b<0);
	
	do
	{
		printf("Nhap vao sao nguyen duong c= ");
		scanf("%d",&c);
	}
	while(c<0);
	
	printf("Ba so vua nhhap la : \n");
	printf("a=%d",a);
	printf("\n");
	printf("b=%d",b);
	printf("\n");
	printf("c=%d",c);
	printf("\n");
	
	if(a>b)
		if(a>c)
		{
			printf("So lon nhat la a=%d",a);
		}
		else
			printf("So lon nhat la b=%d",b);
	else
		if(b>c)
		{
			printf("So lon nhat la b=%d",b);
		}
		else
			printf("So lon nhat la c=%d",c);
	
	
	
	
}

#include <stdio.h>
#include <iostream>

int main()
{
	int so[10];
	printf("Nhap vao 3 so nguyen duong ban muon: ");
	printf("\na= "); scanf("%d",&so[0]);
	printf("b= "); scanf("%d",&so[1]);
	printf("c= "); scanf("%d",&so[2]);
	printf("Cac so ban vua nhap la: ");
	printf("\n");
	for(int i=0;i<3;i++)
	{
		printf("So thu %d:%d",i,so[i]);
		printf("\n");
	}
	
	int max=so[1];
	for(int i=0;i<3;i++)
	{
		if(so[i]>max)
		{
			max=so[i];
		}
	}
	printf("So lon nhat trong 3 so la:%d",max);
	
}

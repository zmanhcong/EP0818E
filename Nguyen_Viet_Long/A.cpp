#include<stdio.h>

int main()
{
	int a,b,c;
	int max;
    do{
    	printf("Nhap 3 so a,b,c: ");	
		scanf("%d%d%d",&a,&b,&c);
	}while((a>=0) && (b>=0) && (c<=0));
	printf("Nhap 3 so a,b,c: ");	
	scanf("%d%d%d",&a,&b,&c);
	printf("Ba so ban da nhap: ");
	printf("  %d  %d   %d ",a,b,c);
	max = a;
	if(max<b) max = b;
	if(max<c) max = c;
	printf("\nSo lon nhat trong 3 so la: %d ",max);
}

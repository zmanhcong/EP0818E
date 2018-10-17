#include<stdio.h>
main(){
	int a,b,c;
	do{
		printf("nhap a= ");
		scanf("%d",&a);
	}while(a<=0||a>=100);
	do{
		printf("nhap b= ");
		scanf("%d",&b);
	}while(b<=0||b>=100);
	do{
		printf("nhap c= ");
		scanf("%d",&c);
	}while(c<=0||c>=100);
	printf("a= %d ",a);
	printf("b= %d ",b);
	printf("c= %d ",c);
	printf("\n");
	if(a>b&&a>c) printf("max=%d\n ",a);
	else{
		if(b>a&&b>c) printf("max=%d\n ",b);
		else printf("max=%d\n ",c);
	}
}

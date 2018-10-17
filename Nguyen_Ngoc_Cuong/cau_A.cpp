#include<stdio.h>
#include<string.h>
 
 main()
 {
 	int n;
 	int a, b, c;
 	printf("nhap a :");
 	scanf("%d",&a);
 	printf("nhap b :");
 	scanf("%d",&b);
 	printf("nhap c :");
 	scanf("%d",&c);
 	
 	printf("\ngia tri da nhap :");
 	printf("  %d  ",a);
 	printf("  %d  ",b);
 	printf("   %d  \n",c);
 	
 	int max=a;
    if(max<b) max=b;
 	if(max<c) max=c;
 	
 	printf("\ngia tri max :%d",max); 
	 	 
 }

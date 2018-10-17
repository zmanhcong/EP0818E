#include<stdio.h>
#include<math.h>
main(){
	int a,b,c;
	int max=a;
	do{
		printf("nhap 3 so a,b,c : ");
		scanf("%d%d%d",&a,&b,&c);
	}
	while(a<0||b<0||c<0);
	printf("\n3 so vua nhap la : %d %d %d",a,b,c);
	if(b>max) max=b;
	 if (c>max) max=c;
	printf("\nmax = %d  ",max);
}

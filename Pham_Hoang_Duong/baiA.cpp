#include <stdio.h>

int main(){
	int a, b, c, max;
	printf("\n nhap a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	max =a;
	if(max <b) max=b;
	if(max<c) max = c;
	printf("\n max =%d",max);
	return 0;
}

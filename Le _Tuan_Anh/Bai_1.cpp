#include<stdio.h> 
int giatrimax(int a, int b, int c) {
	if (a >b) {
		if (a > c) return(a);
		else return(c);
	}
	else if (b > c) return(b);
	else return(c);
}
int main()
{
	int a, b, c;
	printf("Nhap ba so nguyen:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("Gia tri lon nhat= %d", giatrimax(a, b, c));
	return 0;
}
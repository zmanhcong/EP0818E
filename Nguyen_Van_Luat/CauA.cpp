#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap vao so nguyen a: ");
	scanf("%d",&a);
	printf("Nhap vao so nguyen b: ");
	scanf("%d",&b);
	printf("Nhap vao so nguyen c: ");
	scanf("%d",&c);
	printf("Ba so vua nhap a,b,c lan luot la:%d %d %d\n",a,b,c);
	if(a>=b&&a>=c)
	printf("Gia tri lon nhat la: a= %d\n",a);
	if(b>=c&&b>=a)
	printf("Gia tri lon nhat la: b= %d\n",b);
	else if(c>=a&&c>=b)
	printf("Gia tri lon nhat la: c= %d\n",c);
	return 0;
}

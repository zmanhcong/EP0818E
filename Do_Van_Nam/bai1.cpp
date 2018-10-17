#include<stdio.h>
#include<conio.h>

int main(){

int a,b,c,lonnhat=0;
printf("nhap vao so a:	");
scanf("%d",&a);
if(a<=0)
{
	printf("moi nhap lai so nguyen duong!");
}
printf("\n nhap vao so b:	");
scanf("%d",&b);
if(b<=0)
{
	printf("moi nhap lai so nguyen duong!");
}
printf("\n nhap vao so c:	");
scanf("%d",&c);
printf("%d %d %d",a,b,c);
if(c<=0)
{
	printf("moi nhap lai so nguyen duong!");
}
lonnhat=a;
if (a>b&&a>c)
{
	printf("\nso lon nhat la:%d",a);
}
else {
	if (b>a&&b>c)
	{printf("\n%d la so lon nhat",b);
	}
	else
	printf("\n%d la so lon nhat",c);
}
}

//}

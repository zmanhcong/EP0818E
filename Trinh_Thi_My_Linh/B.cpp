#include<stdio.h>
#include<string.h>
void xoa(char a[],int x)
{
	int n=strlen(a);
	for(int i=x;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
main()
{
	char a[256];
	int n,i,hoa=0,thuong=0,so=0,tu=1;
	printf("Nhap xau: ");
	gets(a);
	n=strlen(a);
	if(n==0) {
		printf("Xau vua nhap trong!");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		if(a[0]==32)
		{
			xoa(a,0);
			n--;
		}
		if(a[n-1]==32)
		{
			xoa(a,n-1);
			n--;
		}
		if(a[i]==32&&a[i+1]==32)
		{
			xoa(a,i);
			n--;
			i--;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>'A'&&a[i]<'Z') hoa=hoa+1;
		if(a[i]>'a'&&a[i]<'z') thuong=thuong+1;
		if(a[i]>'0'&&a[i]<'9') so=so+1;
		if(a[i]==32&&a[i+1]!=32) tu=tu+1;
	}
	
	printf("%s",a);
	printf("\nSo chu hoa trong xau: %d",hoa);
	printf("\nSo chu thuong trong xau: %d",thuong);
	printf("\nSo chu so trong xau: %d",so);
	printf("\nSo chu so trong xau: %d",tu);
}

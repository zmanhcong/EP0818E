#include <stdio.h>
#include <stdlib.h>

timSLN(int a, int b, int c);

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("Nhap cac so a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("So lon nhat trong 3 so vua nhap la: %d.\n", timSLN(a,b,c));
	return 0;
}

timSLN(int a, int b, int c)
{
	int MAX = a;
	if(b>MAX)
	{
		MAX = b;
		if(c > MAX)
		{
			MAX = c;
		}
	}
	else if(c > MAX)
	{
		MAX = c;
	}
	return MAX;
}

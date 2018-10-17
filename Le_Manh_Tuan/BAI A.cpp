#include <stdio.h>

int main()
{
	int a, b, c, max;
	
	printf("nhap ba so nguyen: \n");
	while(1)
	{	
		scanf("%d", &a);
		scanf("\n%d", &b);
		scanf("\n%d", &c);
		if( (a <= 0 ) || (b <= 0) || (c <= 0))
		{
			printf("moi nhap lai: \n");
			continue;
		}
		break;
	}
	printf("\n ba so da nhap la");	
	printf("\na = %d", a);
	printf("\nb = %d", b);
	printf("\nc = %d", c);
			
	a > b ? max = a : max = b;	
	if(max < c) max = c;	
				
	printf("\nmax = %d", max);
		
	return 0;
}

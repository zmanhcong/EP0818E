#include <stdio.h>
#include <string.h>

int main()
{
	const int n = 256;
	char c[n];
	int count[n] = {0, 0, 0, 1};
	printf("nhap day ky tu: \n");
	gets(c);
		
	for(int i = 0; c[i]; i++)
	{
		if( c[i] >= 97 & c[i] <= 122)
			count[0]++;
		if( c[i] >= 65 & c[i] <= 90)
			count[1]++;
		if( c[i] >= 48 & c[i] <= 57)
			count[2]++;
		if( c[i] == 32)
			count[3]++;
	}
	
	printf("\nso chu cai thuong: %d", count[0]);
	printf("\nso chu cai hoa: %d", count[1]);
	printf("\nso chu so: %d", count[2]);
	printf("\nso tu: %d", count[3]);
	
	return 0;
}

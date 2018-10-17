#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	const int nKyTu = 256;
	int dem[nKyTu];
	char s[100];
	printf("Nhap xau: ");
	gets(s);
	for (int i = 0; i < nKyTu; i++)
		dem[i] = 0;

	for (int i = 0; char c = s[i]; i++)
		dem[c]++;

	int max = 0;
	for (int i = 0; i < nKyTu; i++)
		if (max < dem[i])
			max = dem[i];

	for (int i = 0; i < nKyTu; i++)
		if (dem[i] == max)
			printf("\nSo ki tu khoang trang: %d", dem[i]);

	int nHoa = 0, nThuong = 0, nChuSo = 0,
		soTu = 0;
	char last = 32;//space

	for (int i = 0; char c = s[i]; i++)
	{
		if (last == 32 && c != 32)
			soTu++;
		last = c;

		if (c >= 'A' && c <= 'Z')
		{
			nHoa++; continue;
		}
		if (c >= 'a' && c <= 'z')
		{
			nThuong++; continue;
		}
		if (c >= '0' && c <= '9')
			nChuSo++;
	}

	printf("\n\nSo chu cai hoa: %d ", nHoa);
	printf("\nSo chu cai thuong: %d ", nThuong);
	printf("\nSo chu so: %d ", nChuSo);
	printf("\nSo tu: %d", soTu);
	return 0;
}

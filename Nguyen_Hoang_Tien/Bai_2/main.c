#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHIEU_DAI_XAU 100

void TimGiaTri(char str[],int *vietHoa,int *vietThuong,int *chuSo,int *tu);

int main(int argc, char *argv[]) {
	char str[CHIEU_DAI_XAU];
	printf("Nhap xau ki tu (Chu y: XAU KI TU NHAP VAO PHAI CO SO KI TU NHO HON 100, KI TU NHAP VAO TINH CA DAU CACH!)\n");
	printf("Xau ki tu nhap vao la: ");
	gets(str);
	
	int vietHoa, vietThuong, chuSo, tu;
	TimGiaTri(str, &vietHoa, &vietThuong, &chuSo, &tu);
	printf("So chu cai viet hoa la: %d", vietHoa);
	printf("So chu cai viet thuong la: %d", vietThuong);
	printf("So chu so la: %d", chuSo);
	printf("So tu la: %d", tu);
	return 0;
}

void TimGiaTri(char str[],int *vietHoa,int *vietThuong,int *chuSo,int *tu)
{
	*vietHoa = 0;
	*vietThuong = 0;
	*chuSo = 0;
	*tu = 0;
	for(int i = 0; i < CHIEU_DAI_XAU; i++)
	{
		if(str[i] >= 0 && str[i] <=120 )
		{
			*vietHoa++;
		}
		
		if(str[i] >=0  && str[i] <=90 )
		{
			*vietHoa++;
		}
		
		if(str[i]!=NULL)
		{
			*vietThuong++;
		}
		
		if(i>0 && str[i-1] == ' ' && str[i] != NULL)
		{
			*tu++;
		}
	}
	
}

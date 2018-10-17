#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHIEU_DAI_XAU 100 //Chieu dai xau.

int KIEMTRASOTU(char str[],int count, int tu);
void TimGiaTri(char str[]);
int length(char str[]);


int main(int argc, char *argv[]) {
	
	char str[CHIEU_DAI_XAU];
	
	printf("Nhap xau ki tu \n(Chu y: XAU KI TU NHAP VAO PHAI CO SO KI TU NHO HON 100,\nKI TU NHAP VAO TINH CA DAU CACH!)\n");
	printf("Xau ki tu nhap vao la: ");
	
	fflush(stdin);
	gets(str);
	printf("Xau ma ban vua nhap la: %s.\n", str);
	printf("Do dai : %d\n", length(str));
	TimGiaTri(str);
	
	return 0;
}


void TimGiaTri(char str[])
{
    int vietHoa = 0;
	int vietThuong = 0;
	int chuSo = 0;
	int tu = 0;
	for(int i = 0; i < length(str); i++)
	{
		if(str[i] != NULL)
		{
			if(str[i] >= 97 && str[i] <=122 )
		    {
			    vietThuong++;
			    tu = KIEMTRASOTU(str, i, tu);
		    }
			else if(str[i] >=65  && str[i] <=90 )
		    {
			    vietHoa++;
			    tu = KIEMTRASOTU(str, i, tu);
		    }
			else if(str[i] >=48  && str[i] <=57)
		    {
			    chuSo++;
			    tu = KIEMTRASOTU(str, i, tu);

		    }
		}
		
	}
	
    printf("So chu cai viet hoa la: %d.\n", vietHoa);
	printf("So chu cai viet thuong la: %d.\n", vietThuong);
	printf("So chu so la: %d.\n", chuSo);
	printf("So tu la: %d.\n", tu+1);
	
}

int length(char str[])
{
	int n = 0;
	while(str[n] != '\0') n++;
	return n;
}

int KIEMTRASOTU(char str[],int count, int tu) 
{
	if(str[count-1]==' ')
	{
	     tu++;
	}
	return tu;
}

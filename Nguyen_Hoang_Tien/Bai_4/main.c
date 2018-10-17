#include <stdio.h>
#include <stdlib.h>

typedef struct sach
{
	char ten[50];
	int soTrang;
	float giaTien;
} sach;

void nhapDSsach(sach DSsach[], int n); //Nhap thong tin sach.
void invaofile(FILE *file, sach DSsach[], int n); //In ra file.
void nhapsophantu(int *n); //Nhap so phan tu.


int main(int argc, char *argv[])
{
	
	int n;
	
	//Nhap n la so quyen sach.
    nhapsophantu(&n); 
    
    //Tao mang 1 chieu la danh sach cac quyen sach.
    sach DSsach[n]; 
    
    //Nhap thong tin sach.
    nhapDSsach(DSsach, n); 

	//Tao file.
	FILE *file;
	file = fopen("data.txt", "w+");
	if(file == NULL)
	{
		printf("Loi thao tac voi file.\n");
		return 0;
	}
	
	
	//In thong tin sach vao file.
	invaofile(file,DSsach, n);
	
	return 0;
}

void nhapsophantu(int *n)
{
	do //Bay nhap.
	{
	printf("Nhap so quyen sach (CHU Y: SO QUYEN SACH KHONG DUOC VUOT QUA 100): ");
	scanf("%d", n);
    }while ((*n) > 100 || (*n) < 0);
}

void nhapDSsach(sach DSsach[], int n)
{
	int i;
	for(i = 0; i < n; i++)
    {
    	printf("Nhap thong tin quyen sach thu %d:\n", i+1);
    	printf("+) Nhap ten quyen sach: ");
    	fflush(stdin);
		gets(DSsach[i].ten);
    	
    	do
    	{
    	printf("+) Nhap so trang cua sach: ");
    	fflush(stdin);
    	scanf("%d", &DSsach[i].soTrang);
		}while(DSsach[i].soTrang < 0);
		
		do
		{
		printf("+) Nhap so tien cua quyen sach: ");
		fflush(stdin);
		scanf("%f", &DSsach[i].giaTien);
		}while(DSsach[i].giaTien < 0);
	}
}

void invaofile(FILE *file, sach DSsach[], int n)
{
	int i;
	fprintf(file,"\n***THONG TIN SACH***\n");
	for(i = 0; i < n; i++)
    {
    	fprintf(file, "\nThong tin quyen sach thu %d: \n", i+1);
    	fprintf(file, "+) Ten sach: %s.\n", DSsach[i].ten);
    	fprintf(file, "+) So trang sach: %d trang.\n", DSsach[i].soTrang);
		fprintf(file, "+) Gia tien sach: %f VND.\n", DSsach[i].giaTien);
	}
	
	printf("\nDa in thong tin sach vao file thanh cong.\n");
}

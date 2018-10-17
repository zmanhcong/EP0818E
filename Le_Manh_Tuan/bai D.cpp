#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <stdlib.h>

struct QuyenSach
{
	char Ten[50];
	int SoTrang;
	float GiaTien;
};

const int n = 100;
QuyenSach p[n];

void GhiRaFile(QuyenSach *p)
{
	FILE *fp;
	fp = fopen("data.txt", "w");
	for(int i = 0; i < n; i++)
	{
		if((p+i)->Ten[0] == 0) 
			return;		
		fprintf(fp,"%s",(p+i)->Ten);
		fprintf(fp,"\t%d",(p+i)->SoTrang);
		fprintf(fp,"\t%0.0f",(p+i)->GiaTien);
		fprintf(fp,"\n");
	}	
	fclose(fp);	
}

void InMang(QuyenSach *p)
{
	for(int i = 0; i < n; i++)
	{
		if((p+i)->Ten[0] == 0)
			return;
		printf("Ten Sach: "); 		printf("%s",(p+i)->Ten);
		printf("\tSo Trang: "); 	printf("%d",(p+i)->SoTrang);
		printf("\tGia Tien: "); 	printf("%0.0f",(p+i)->GiaTien);	
		printf("\n");
	}	
}

int main()
{
	int i = 0;
	while(1)
	{
		printf("Ten Sach: "); gets((p+i)->Ten);
		if((p+i)->Ten[0] == 0)
			break;						
		printf("SoTrang: "); scanf("%d", &(p+i)->SoTrang); 	
		printf("GiaTien: "); scanf("%f",&(p+i)->GiaTien);
		fflush(stdin);
		
		i++;
		system("cls");
	}	
	InMang(p);
	GhiRaFile(p);	
	system("pause");
	return 0;
}

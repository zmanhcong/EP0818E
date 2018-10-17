#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>

struct SinhVien
{
	int MSV;
	char HoTen[20];
	int GioiTinh;
	float D1;
	float D2;
	float D3;
	float DTB;
	struct SinhVien *Next;
};

struct DanhSach
{
	SinhVien *head, *tail;
	int SoNut;
};

DanhSach *TaoDanhSach()
{
	DanhSach *p = (struct DanhSach*)malloc(sizeof(DanhSach));
	p->SoNut = 0;
	return p; 
}

void XoaDanhSach(DanhSach *danhsach)
{
	for(int i = 0; i < danhsach->SoNut; i++)
	{
		SinhVien *p = danhsach->head;
		danhsach->head = p->Next;
		delete p;
	}
	delete danhsach; 
}

void ThemNut(SinhVien *p, DanhSach *danhsach)
{
	p->Next = 0;
	if(danhsach->SoNut++ == 0)
		danhsach->tail = danhsach->head = p;
	else 
	{
		danhsach->tail->Next = p;
		danhsach->tail = p;	
	}		
}

void GhiDanhSach(DanhSach *danhsach)
{
	if(danhsach == 0)
		return;
	SinhVien *p;
	p = danhsach->head;
	FILE *fp;
	fp = fopen("data.txt","w");	
	for(int i = 0; i< danhsach->SoNut; i++)
	{
		fprintf(fp,"%d",p->MSV);
		fprintf(fp,"\t%s",p->HoTen);
		fprintf(fp,"\t%d",p->GioiTinh);
		fprintf(fp,"\t%0.1f",p->D1);	
		fprintf(fp,"\t%0.1f",p->D2);
		fprintf(fp,"\t%0.1f",p->D3);
		p = p->Next;
	}
	fclose(fp);	
}


void DocDanhSach(DanhSach *danhsach)
{	
	FILE *fp;
	fp= fopen("data.txt","r");
	while (!feof(fp))
	{
		SinhVien *p = (struct SinhVien*)malloc(sizeof(SinhVien));
		fscanf(fp,"%d",p->MSV);	
		fscanf(fp,"%s",p->HoTen);
		if (p->HoTen[0] == 0)
		{
			delete p;
			break;
		}	
		fscanf(fp,"%d",p->GioiTinh);
		fscanf(fp,"%0.1f",p->D1);	
		fscanf(fp,"%0.1f",p->D2);
		fscanf(fp,"%0.1f",p->D3);
		ThemNut(p, danhsach);
		fflush(stdin);
	}
	fclose(fp);
}

void NhapMoi(DanhSach *danhsach)
{
	SinhVien *p = (struct SinhVien*)malloc(sizeof(SinhVien));
	printf("Ma sinh vien: ");	scanf("%d",&p->MSV);
	fflush(stdin);	
	printf("ho ten: "); 		gets(p->HoTen);

	printf("Gioi Tinh: ");		scanf("%d",&p->GioiTinh);
	printf("diemm mon 1 ");		scanf("%f",&p->D1);
	printf("diemm mon 2 ");		scanf("%f",&p->D2);
	printf("diemm mon 3 ");		scanf("%f",&p->D3);
	fflush(stdin);

	DocDanhSach(danhsach);
	ThemNut(p, danhsach);		
	GhiDanhSach(danhsach);	
}

void InDanhSach(DanhSach *danhsach)
{
	DocDanhSach(danhsach);
	SinhVien *p = danhsach->head;
	for(int i = 0; i < danhsach->SoNut; i++, p = p->Next)
	{
		printf("Ma sinh vien: ");	printf("%d",p->MSV);	
		printf("\nho ten: "); 		puts(p->HoTen);
		printf("\Gioi Tinh: "); 
		p->GioiTinh == 1 ? printf("Nam") : printf("Nu");	
		printf("\ndiemm mon 1: ");	 	printf("%0.1f", p->D1);
		printf("\ndiemm mon 2: ");	 	printf("%0.1f", p->D2);
		printf("\ndiemm mon 3: ");	 	printf("%0.1f \n", p->D3);
	}
}

void TinhDiem(DanhSach *danhsach)
{
	SinhVien *p;
	p = danhsach->head;
	for(int i = 0; i < danhsach->SoNut; i++, p = p->Next)
	{
		p->DTB = (p->D1 + p->D1 + p->D1) / 3;
		if(p-> DTB > 5)
		{
			printf("Ma sinh vien: ");	printf("%d",p->MSV);	
			printf("\nho ten: "); puts(p->HoTen);
			printf("Gioi Tinh: "); 
				p->GioiTinh == 1 ? printf("Nam") : printf("Nu");	
			printf("\ndiemm mon 1: ");	 	printf("%0.1f", p->D1);
			printf("\ndiemm mon 2: ");	 	printf("%0.1f", p->D2);
			printf("\ndiemm mon 3: ");	 	printf("%0.1f \n", p->D3);
		}	
	}	
}

int GetMenu()
{
	int menu;
	printf("1. Xem danh sach: ");
	printf("\n2. Liet ke sinh vien diem trung binh hon 5 ");
	printf("\n3. Nhap moi: ");
	printf("\n4. Thoat ");
	scanf("%d",&menu);
	return menu;
}

int main()
{
	int Menu;
	DanhSach *danhsach = NULL;
	danhsach = TaoDanhSach(); 	
	while(1)
	{
		Menu = GetMenu();
		system("CLS");
		switch(Menu)
		{
			case 1: 
				InDanhSach(danhsach);
				break;
			case 2: 
				TinhDiem(danhsach);
				break;
			case 3:
				NhapMoi(danhsach);
				break;
			default:
				return 0;
				break;	
		}
		system("pause");
		system("CLS");
	}
	return 0;
}

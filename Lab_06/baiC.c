#include<stdio.h>
#include<conio.h>
struct sinhvien
{
    char masv[30];
    char hoten[30];
    char gioitinh[5];
    float d1,d2,d3;
};

int main()
{
    struct sinhvien sv[100];
    printf("\nNhap n :");
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        printf("\nNhap thong tin sinh vien thu %d",i);
        printf("\nMa sinh vien   :");
        fflush(stdin);
        gets(sv[i].masv);
        printf("\nHo va ten :");
        fflush(stdin);
        gets(sv[i].hoten);
        printf("\nGioi tinh :");
        fflush(stdin);
        gets(sv[i].gioitinh);
        printf("\nDiem mon 1 :");
        scanf("%f",&sv[i].d1);
        printf("\nDiem mon 2 :");
        scanf("%f",&sv[i].d2);
        printf("\nDiem mon 3 :");
        scanf("%f",&sv[i].d3);
    }
    printf("\n===THONG TIN SINH VIEN DA NHAP====");
    printf("\n%5s %30s %5s %5s %5s %5s","MaSV","Ho va Ten","GTinh","Diem1","Diem2","Diem3");
    for(i=1;i<=n;i++)
    {
        printf("\n%5s %30s %5s %5.2f %5.2f %5.2f",sv[i].masv,sv[i].hoten,sv[i].gioitinh,sv[i].d1,sv[i].d2,sv[i].d3);
    }
    printf("\n====THONG TIN NHUNG SINH VIEN DO CO DIEM TB > 5=====");
    printf("\n%5s %30s %5s %5s %5s %5s","MaSV","Ho va Ten","GTinh","Diem1","Diem2","Diem3");
    for(i=1;i<=n;i++)
    {
        if(((sv[i].d1+sv[i].d2+sv[i].d3)/3) > 5)
            printf("\n%5s %30s %5s %5.2f %5.2f %5.2f",sv[i].masv,sv[i].hoten,sv[i].gioitinh,sv[i].d1,sv[i].d2,sv[i].d3);
    }

    return 0;
}

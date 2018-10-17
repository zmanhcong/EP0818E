#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n,a[100];
struct sach
{
    char ten[30];
    int st;
    float giatien;
};
struct sach s[100];
void ghiFile()
{
    FILE *f;
    f=fopen("data.txt","w");
    fprintf(f,"\n%30s %10s %10s","Ten sach","STrang","GTien");
    int i;
    for(i=1;i<=n;i++)
    {
        fprintf(f,"\n%30s %10d %10.2f",s[i].ten,s[i].st,s[i].giatien);
    }
    fclose(f);

}
int main()
{
    do
    {
        printf("\nNhap n :");
        scanf("%d",&n);
    }while(n>100 || n<0);
    int i;
    for(i=1;i<=n;i++)
    {
        printf("\nTen sach %d:",i);
        fflush(stdin);
        gets(s[i].ten);
        printf("\nSo trang :");
        scanf("%d",&s[i].st);
        printf("\nGia tien :");
        scanf("%f",&s[i].giatien);
    }
    printf("\nThong tin sach da nhap");
    printf("\n%30s %10s %10s","Ten sach","STrang","GTien");
    for(i=1;i<=n;i++)
    {
        printf("\n%30s %10d %10.2f",s[i].ten,s[i].st,s[i].giatien);
    }
    ghiFile();
    printf("\nDa ghi vao file ! ");
    return 0;

}

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
 

struct Thuviensach
{
    char Sotrang[7];
   char Tensach[100];
   float Giasach ;
};

struct Thuviensach s[100];
int n= 0;

int Hienthimenu()
{
   
   printf("\t\t\tQUAN LY SACH TRONG THU VIEN.\n");
   printf("Nhap danh sach sach.\n");
   printf("Ghi danh sach sach vao tep tin.\n");
   printf("In danh sach sach.\n");
   printf("Doc danh sach sach tu tep tin.\n");
   printf("Thoat.");
   printf("Ban chon: ");
   int chon;
   scanf("%d",&chon);
   return chon;
}
void nhapdanhsachsach()
 {
    printf("*********************\n");
   printf("Nhap danh sach sach\n");
   printf("*********************\n");
 
   do
   {
    printf("Quyen sach thu %d:\n",n+1);
      printf("\tMa sach: ");
      fflush(stdin);
      gets(s[n].Sotrang);
      if (strlen(s[n].Sotrang)==0)
      {
        break;
      }
      printf("\tTen sach: ");
      fflush(stdin);
      gets(s[n].Tensach);
      printf("\Gia sach: ");
      scanf("%f",&s[n].Giasach);
      n++;
 
   }while (1==1);
   printf("\nBam enter de tiep tuc.");
   getch();
}
 
void Ghidanhsachvaoteptin()
{
   int i=1;
   FILE *fp;
 
   clrscr();
   printf("\n\t\tGHI DANH SACH VAO TEP TIN:");
   do
   {
    printf("\tTen sach: ");
      fflush(stdin);
      gets(s[n].Ten);
      printf("\tSotrang: ");
      fflush(stdin);
      gets(s[n].Trang);
      printf("\tGia sach: ");
      scanf("%f",&s[n].Gia);
   }while(1);
   clrscr();
   fp=fopen("Thuviensach.txt","a");
   if(fp==NULL)
   {
    return;
   }

   for (i=0;i<n;i++)
   {
    fprintf(fp,"%s\n",s[n].Tensach);
      fprintf(fp,"%s\n",s[n].Sotrang);
      fprintf(fp,"%f\n",s[n].Giasach);
   }
   fclose(fp);
   clrscr();
   printf("\nBam enter de tiep tuc.");
   getch();
}
 
void Indanhsachsach()
{
    printf("++++++++++++++++++++++++++++++\n");
   printf("DANH SACH SACH TRONG THU VIEN.\n");
   printf("++++++++++++++++++++++++++++++\n");
 
   printf("%s %s  Gia\n","Ten sach","Sotrang","Gia sach");
   for (int i=0;i<n;i++)
   {
   printf("%s %s %.4f\n",s[n].Tensach,s[n].Masach,s[n].Giasach);
   }
   printf("\nBam enter de tiep tuc.");
   getch();
}
void Docdanhsachsachtuteptin()
{
    int i=1;
   FILE *fp;
   struct thuviensach s[n];
   
   fp=fopen("thuviensach.txt","r");
   if(fp==NULL)
   {
    printf("Loi roi!");
      return;
   }
   .
   while(!feof(Fp))
   {
     fscanf(fp,"%s",s[n].Tensach);
       fscanf(fp,"%s",s[n].Sotrang);
       fscanf(fp,"%f",s[n].Giasach);
       printf("\nQuyen sach thu %d:\n",);
       printf("\nTen sach:%s\n\tSotrang:%s\n\tGia sach:%.4f\n",);
   }
   prinrf("\t\nTong so sach trong thu vien la:%d",i-=1);
   fclose(fp);
   printf("\nBam enter de tiep tuc.");
   getch();
}
 
int main(){
   int chon;
   do
   {
    chon = Hienthimenu();
      switch (chon)
      {
        case 1:
           nhapdanhsachsach();
           break;
         case 2:
           Ghidanhsachvaoteptin();
           break;
         case 3:
           Indanhsachsach();
           break;
         case 4:
           Docdanhsachsachtuteptin();
           break;
      }
   }while(chon!=5);
}

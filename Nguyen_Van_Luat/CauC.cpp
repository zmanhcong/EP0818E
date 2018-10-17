#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
struct sinhvien {
	int masv;
	char hoten[50];
	char gioitinh[50];
	int diem_mon1;
	int diem_mon2;
	int diem_mon3;
};
int main()
{
	int n,i,j,m;
	float diem_tb;
	printf("Hay nhap so sinh vien: \n");
	scanf("%d",&n);
	printf("Lop co %d sinh vien\n",n);
	struct sinhvien student[n];
/*Nhap sanh sach sinh vien gom co ma sv, ho ten, gioi tinh, diem mon 1, diem mon 2 va diem mon 3*/
	for(i=1;i<=n;i++)
	{
		printf("Nhap du lieu cho sinh vien thu %d\n",i);
		printf("Nhap ma sinh vien:\n");
		scanf("%d",&student[i].masv);
		printf("Nhap ho ten:\n");
		fflush(stdin);
        gets(student[i].hoten);
//		scanf("%s",&student[i].hoten);
		printf("Nhap gioi tinh:\n");
		fflush(stdin);
        gets(student[i].gioitinh);
//		scanf("%s",&student[i].gioitinh);
		printf("Nhap diem mon 1:\n");
		scanf("%d",&student[i].diem_mon1);
		printf("Nhap diem mon 2:\n");
		scanf("%d",&student[i].diem_mon2);
		printf("Nhap diem mon 3:\n");
		scanf("%d",&student[i].diem_mon3);
	}
/*In danh sach vua nhap*/
	printf("Danh sach sinh vien da nhap la:\n");
	for(j=1;j<=n;j++)
	{
	printf("%d %s %s %d %d %d\n",student[j].masv,student[j].hoten,student[j].gioitinh,student[j].diem_mon1,student[j].diem_mon2,student[j].diem_mon3);
	}
//	printf("Danh sach nhung sinh vien co diem trung binh lon hon 5:\n");
//	for(m=1;m<=n;m++)
//	{
//		diem_tb=(student[m].diem_mon1+student[m].diem_mon2+student[m].diem_mon3)/3;
//		if(diem_tb>=float(5)) 
//		printf ("&s",student[m].hoten);
//	}
	return 0;
}

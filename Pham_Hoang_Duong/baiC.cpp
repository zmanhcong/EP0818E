#include <stdio.h>
#include <conio.h>
#include <string.h>
struct sinhvien
{
	int masv;
	float diem1, diem2, diem3;
	char hoten, gioitinh; 
}
typedef sinhvien[100]
void nhap(mang m,int n){

int i;
for(i=0,i<n,i++){
fflush (stdin);
printf("ma sinh vien [%d]\n",i+1);
scanf("%d",&masv);
gets(m[i].masv);
fflush(stdin);
printf("ho ten sinh vien\n",i+1);
gets(m[i].hoten);
fflush(stdin);
printf("nhap diem mon 1:\n",i+1);
getch(m[i].mon1);
printf("nhap diem mon 2:\n",i+1);
getch(m[i].mon2);
printf("nhap diem mon 3:\n",i+1);
getch(m[i].mon3);
}
}
void hien(mang m,int n){
	int i;
	for (i=0,i<n,i++);
}
return 0;
}

#include<stdio.h>
#include<mem.h>
#include<string.h>
int sv[100];
struct sinhvien{
	char masv[30];
	char hoten[30];
	char gioitinh[10];
	float diem1;
	float diem2;
	float diem3;
};
main()
{   int i,n;
    float t; 
    struct	sinhvien sv[100];
	do{
		printf("nhap so sinh vien: ");
	    scanf("%d",&n);
	    fflush(stdin);
	}
	while(n<0||n>100);
	for(i=0;i<n;i++)
	{
		printf("%d.nhap ma sinh vien %d: ",i+1,i+1);
		gets(sv[i].masv);
		printf("nhap ten cua sinh vien %d :",i+1);
		gets(sv[i].hoten);
		printf("gioi tinh cua sinh vien %d :",i+1);
		gets(sv[i].gioitinh);
		printf("nhap diem so 1 cua sv %d :",i+1);
		scanf("%f",&sv[i].diem1);
		fflush(stdin);
		printf("nhap diem so 2 cua sv %d :",i+1);
		scanf("%f",&sv[i].diem2);
		fflush(stdin);
		printf("nhap diem so 3 cua sv %d :",i+1);
		scanf("%f",&sv[i].diem3);
		fflush(stdin);
		
	}
	for (i=0;i<n;i++)
	{
		printf("%d. ma sinh vien :  ",i+1);
		puts(sv[i].masv);
		printf("ten cua sinh vien :");
		puts(sv[i].hoten);
		printf("gioi tinh cua sinh vien  :");
		puts(sv[i].gioitinh);
		printf("diem so 1 cua sv :%f\n",sv[i].diem1);
		printf("diem so 2 cua sv :%f\n",sv[i].diem2);
		printf("diem so 3 cua sv :%f\n",sv[i].diem3);
	}
		printf("nhung sinh vien co diem >5:\n");
	for(i=0;i<n;i++){
		t=(sv[i].diem1 + sv[i].diem2 + sv[i].diem3)/3;
		if (t>=5){
			printf("ma sv :");
			puts(sv[i].masv);
			printf("ho ten sv:");
			puts(sv[i].hoten);
			printf("gioi tinh sv:");
			puts(sv[i].gioitinh);
		    printf("diem so 1 cua sv :%f\n",sv[i].diem1);
		    printf("diem so 2 cua sv :%f\n",sv[i].diem2);
		    printf("diem so 3 cua sv :%f\n",sv[i].diem3);
		    printf("diem trung binh cua sv : %f",t);
		}
	}
		
}

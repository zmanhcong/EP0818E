#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student 
{
	int ID;
	char Name[50];
	char Gender[5];
	float Score1;	
	float Score2;
	float Score3;
};

int Input(struct student List[], int num)
{
	int i;
	for (i=0;i<num;i++)
	{
		printf("Nhap ma so sinh vien thu %d: ",i+1);
		scanf("%d",&List[i].ID);
		fflush(stdin);
		printf("Nhap ho ten sinh vien thu %d: ",i+1);
		gets(List[i].Name);
		printf("Nhap gioi tinh sinh vien thu %d: ",i+1);
		gets(List[i].Gender);
		printf("Nhap diem mon 1 sinh vien thu %d: ",i+1);
		scanf("%f",&List[i].Score1);
		printf("Nhap diem mon 2 sinh vien thu %d: ",i+1);
		scanf("%f",&List[i].Score2);
		printf("Nhap diem mon 3 sinh vien thu %d: ",i+1);
		scanf("%f",&List[i].Score3);
	}
}

int Output(struct student List[], int num)
{
	int i;
	printf("\nDanh sach sinh vien da nhap la:\n");
	for (i=0;i<num;i++)
	puts(List[i].Name);

}


int CheckPassStudent(struct student List[],int num)
{
	float score;
	printf("\nDanh sach sinh vien do la:\n");
	for (int i=0;i<num;i++)
	{
		score = ((List[i].Score1 + List[i].Score2 + List[i].Score3)/3);
		if (score >= 5)
		{
			printf("Ten sinh vien do la:");
			puts(List[i].Name);	
			printf("Ma so sinh vien do: %d",List[i].ID);
			printf("Gioi tinh sinh vien: ");
			puts(List[i].Gender);
			printf("Diem mon 1 cua sinh vien: %g",List[i].Score1);
			printf("\nDiem mon 2 cua sinh vien: %g",List[i].Score2);
			printf("\nDiem mon 3 cua sinh vien: %g\n",List[i].Score3);
			
		}
		
	}
}

int main()
{
	int num;
	struct student List[100];
	printf("Nhap tong so sinh vien: ");
	scanf("%d",&num);
	Input(List,num);
	Output(List,num);
	CheckPassStudent(List,num);
}

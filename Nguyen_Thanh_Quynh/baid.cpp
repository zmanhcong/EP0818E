#include<stdio.h>
#include<string.h>
int sh[100];
struct sach{
	char ten[30];
	int sotrang;
	int giatien;
};
main(){
	FILE *fp;
	int i,n;
	struct sach sh[100];
	do{
		printf("nhap vao so quyen sach: ");
		scanf("%d",&n);
		fflush(stdin);
	}
	while(n<0||n>100);
	for(i=0;i<n;i++)
	{
		printf("%d.ten sach %d : ",i+1,i+1);
		gets(sh[i].ten);
		printf("so trang sach %d :",i+1);
		scanf("%d",&sh[i].sotrang);
		fflush(stdin);
		printf("gia tien sach %d :",i+1);
		scanf("%d",&sh[i].giatien);
		fflush(stdin);
	}
	for(i=0;i<n;i++)
	{
		printf("%d . ten sach : %s\n",i+1,sh[i].ten);
		printf("so trang : %d\n",sh[i].sotrang);
		printf("gia tien : %d\n",sh[i].giatien);
	}
	
	fp=fopen("data.txt","w");
	fprintf(fp,"thong tin quyen sach la :\n");
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%d . ten sach : %s\n",i+1,sh[i].ten);
		fprintf(fp,"so trang : %d\n",sh[i].sotrang);
		fprintf(fp,"gia tien : %d\n",sh[i].giatien);
}
}

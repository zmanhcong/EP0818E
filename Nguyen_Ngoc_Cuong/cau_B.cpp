#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,viethoa=0,vietthuong=0,so=0,tu=0;
	do{
		printf("Nhap chuoi: ");
		gets(str);
		printf("Chuoi vua nhap: ");
		puts(str);
	}while((strlen(str)<=0) || (strlen(str)>100));	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i] >= '0' && str[i] <= '9')  so=so+1;
		else if(str[i] >= 'A' && str[i] <='Z') viethoa = viethoa+1;
		else if(str[i] >= 'a' && str[i] <='z') vietthuong = vietthuong+1;
 	}
 	if(str[0]!=' ') tu++;
 	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '&& str[i+1]!=' '&&str[i+1]!='\0') tu++;
	 }
 	printf("\nSo ky tu viet hoa : %d",viethoa);
 	printf("\nSo ky tu viet thuong : %d",vietthuong);
 	printf("\nSo ky tu la so : %d",so);
 	printf("\nSo tu : %d",tu);
}

#include<stdio.h>
#include<string.h>
char s[100];
void nhap(){
	printf("nhap xau= ");
	gets(s);
}
void chuhoa(){
	int i,d=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]<='Z'&&s[i]>='A') d++;
	}
	printf("chu hoa=%d\n ",d);
}
void chuthuong(){
	int i,d=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]<='z'&&s[i]>='a') d++;
	}
	printf("chu thuong=%d\n ",d);
}
void chuso(){
	int i,d=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]<='9'&&s[i]>='0') d++;
	}
	printf("chu so=%d\n ",d);
}
void tu(){
	int i,d=0;
	if(s[0]!=' ') d++;
	for(i=0;s[i]!='\0';i++){
		if(s[i]==' '&&s[i+1]!='\0'&&s[i+1]!=' ') d++;
	}
	printf("tu=%d\n ",d);
}
main(){
	nhap();
	chuhoa();
	chuthuong();
	chuso();
	tu();
}

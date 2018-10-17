#include <stdio.h>
#include <string.h>


void main(){
	char str[1000];
	char str1[1000];
	
	printf("Nhap vao xau :");
	fflush(stdin);
	gets(str);
	
	unsigned int viethoa=0;
	unsigned int vietthuong=0;
	unsigned int chuso=0;
	unsigned int tu=0;
	unsigned int i=0;
	
	i=0;
	while(str[i]!='\0')
	{
		if( ('A'<=str[i]) && (str[i]<='Z') )
		viethoa+=1;
		i++;	
	}
	
	i=0;
	while(str[i]!='\0')
	{
		if( ('a'<=str[i]) && (str[i]<='z') )
		vietthuong+=1;
		i++;	
	}
	
	i=0;
	while(str[i]!='\0')
	{
		if( ('0'<=str[i]) && (str[i]<='9') )
		chuso+=1;
		i++;	
	}
	
	// Chuan hoa xau de loai bo dau cach
	int j=0;
	i=0;
	
	//Doan code nay kiem tra dau cach o dau xau
	//Se bo qua nhung dau cach nay cho den khi gap chu cai hoac so
	while(str[i]==' ')
	{
		i++;
	}
	
	while(str[i]!='\0'){
		
		// Neu ki tu hien tai la chu cai hoac so , no se duoc sao chep sang xau khac
		if(( ('A'<=str[i]) && (str[i]<='Z') ) 
		|| ( ('a'<=str[i]) && (str[i]<='z') )
		|| ( ('0'<=str[i]) && (str[i]<='9')	))	
		{
			
			str1[j]=str[i];
			i++;
			j++;
			
		}
		
		//Neu co 2 dau cach lien tiep, no se duoc bo qua
		else if( (str[i]==' ') && (str[i+1]==' ') )
		{	
			i++;		
		}
		
		else 
		{
			str1[j]=' ';
			i++;
			j++;
			
		}
					
	}
	
	printf("Xau da chuan hoa la :");
	puts(str1);
	
	i=0;
	tu=1;
	while(str1[i]!='\0')
	{
		if(str1[i]==' ') 
		tu+=1;
		i++;	
	}
	
	
		
	printf("Chu cai viet hoa bang: %d\n",viethoa);
	printf("Chu cai viet thuong bang: %d\n",vietthuong);
	printf("Chu so bang: %d\n",chuso); 
	printf("So tu bang: %d\n",tu); 
			
		
}
	
	
	
	
	

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char s[100];

void dem(){
    int ktThuong=0,ktHoa=0,so=0,tu=0,i;
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i] >= 'a' && s[i]<='z')
            ktThuong++;
        else if(s[i]>='A' && s[i]<='Z')
            ktHoa++;
        else if(s[i] >= 48 && s[i]<=57)
            so++;
        else if(s[i]==' ')
            tu++;

    }
    printf("\nKy tu Thuong :%d\nKi tu Hoa :%d \nSo :%d \nTu :%d ",ktThuong,ktHoa,so,++tu);

}

int isSpace(int i){
    if(s[i] ==' ')
    {
        return 1;
    }
    else
        return 0;

}

int main()
{

    printf("\nNhap : ");
    fflush(stdin);
    gets(s);
    int i,j;
    for(i=0;i<=strlen(s);i++)
    {
        for(j=0;j<=strlen(s);j++)
        {
        	if(isSpace(i)==1 && isSpace(i+1)==1)
            strcpy(&s[i],&s[i+1]);
        }
    }
    printf("\n%s",s);
    dem();
}

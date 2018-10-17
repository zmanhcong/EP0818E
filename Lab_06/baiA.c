#include<stdio.h>
int main(){
    int a,b,c;
    do
    {
        printf("\nNhap lan luot ba so nguyen a,b,c :");
        scanf("%d%d%d",&a,&b,&c);
    }while(a<0 || b<0 || c<0);

    if((a > b) && (a >c ))
        printf("Max = %d",a);
    else if ((b>a) && (b >c ))
        printf("Max = %d ",b);
    else
        printf("Max =%d",c);
}

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int baslangic,bitis,i;
    int ciftsayi=0;
    printf("Ba�lang�� ve biti� de�erlerini giriniz...\n");
    scanf("%d%d",&baslangic,&bitis);
    printf("Say�lar �unlard�r:");
        for(int i=baslangic;i<=bitis;i++){
        if(i%4==0){
            printf("%d ",i);
            ciftsayi++;
    }
      }printf("(%d adettir):",ciftsayi);



    return 0;
}

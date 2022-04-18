#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()

{
    setlocale(LC_ALL,"Turkish");
    printf("Lütfen kaç satýr yýldýz görmek istiyorsanýz giriniz...");
    int satir;
    scanf("%d",&satir);

    for(int i=0;i<=satir;i++){
        for (int k=i;satir-k;k++){
            printf("%c",' ');
        }
        for(int j=0;j<2*i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    int satirmain = satir;
    for(;0<satir;satir--){
        for (int l=0;l<(satirmain-satir);l++){
                 printf("%c",' ');
            }
        for(int j=0;j<2*satir;j++){
            printf("%c",'*');
        }
        printf("\n");
    }

    return 0;
}

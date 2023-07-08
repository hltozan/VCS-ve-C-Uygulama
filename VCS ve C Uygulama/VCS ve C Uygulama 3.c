#include <stdio.h>
 
int main()
{
    int dizi[10];
    int gecici;
    for(int i = 0; i < 10; i++)
    {
        printf("Dizinin %d. degerini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("\nDizinin kucukten buyuge dogru siralanmis hali\n");
    for(int i = 0; i < 9; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(dizi[j] < dizi[i]){
                gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;
            }
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t",dizi[i]);
    }    
}
#include <stdio.h>
#include <stdlib.h>
#define SON 320


int main()
{
    char dizi[SON];
    int i;
    int onay;

	printf("Lutfen sifresini olusturmak istediginiz cumleyi girin:\n");
    fgets(dizi,sizeof(dizi),stdin);
    printf("girdiginiz cumle \"%s\"",dizi);
    //printf("\ncumleyi onaylamiyorsaniz (h) diyerek programi sonlandirabilirsiniz\n");
    
    printf("\n");
    printf("uzun sifre istiyorsaniz (1)'i kisa sifre istiyorsaniz (2)'yi tuslayiniz");
    printf("\n");
    scanf("%d",&onay);


    if(onay == 1)
    {
    	printf("\n");
        printf("sifreniz:");
        printf("\n");
        for(i=0; dizi[i+1] !='\0'; i++)
        {
            int harf = dizi[i];
            harf = harf-96;
            if(harf<0)
                harf = (harf* -1);
            //printf("%c\n",dizi[i]);
            printf("%d",harf);
            //printf("\n\n\n");
        }
    }
    else if(onay == 2)
    {
        int toplam=0;
        for(i=0; dizi[i+1] !='\0'; i++)
        {
            int harf = dizi[i];
            harf = harf-96;
            if(harf<0)
                harf = (harf* -1);
            toplam+=harf;
        }
        printf("\n");
        printf("sifreniz:");
        printf("\n");
        printf("%d",toplam);
    }
    else
    {
    	printf("\n");
    	printf("hatali bir giris yaptiniz");
    	printf("\n");
    	printf("program sonladiriliyor");
	}
    
    
    
    
    return 0;
}

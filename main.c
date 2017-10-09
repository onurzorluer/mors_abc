#include <stdio.h>
#include <stdlib.h>
#include <string.h>

short alfabe[26];
void vurus(int);
int main()
{

    char gir_metin[100]="";
    char harf;
    int veri1=0,veri2=0,veri3=0,veri4=0;
    int i,j, uzunluk;

    alfabe[0]=(1<<14)|(3<<12)|(0<<10)|(0<<8)|97;
    alfabe[1]=(3<<14)|(1<<12)|(1<<10)|(1<<8)|98;
    alfabe[2]=(3<<14)|(1<<12)|(3<<10)|(1<<8)|99;
    alfabe[3]=(3<<14)|(1<<12)|(1<<10)|(0<<8)|100;
    alfabe[4]=(1<<14)|(0<<12)|(0<<10)|(0<<8)|101;
    alfabe[5]=(1<<14)|(1<<12)|(3<<10)|(1<<8)|102;
    alfabe[6]=(3<<14)|(3<<12)|(1<<10)|(0<<8)|103;
    alfabe[7]=(1<<14)|(1<<12)|(1<<10)|(1<<8)|104;
    alfabe[8]=(1<<14)|(1<<12)|(0<<10)|(0<<8)|105;
    alfabe[9]=(1<<14)|(3<<12)|(3<<10)|(3<<8)|106;
    alfabe[10]=(3<<14)|(1<<12)|(3<<10)|(0<<8)|107;
    alfabe[11]=(1<<14)|(3<<12)|(1<<10)|(1<<8)|108;
    alfabe[12]=(3<<14)|(3<<12)|(0<<10)|(0<<8)|109;
    alfabe[13]=(3<<14)|(1<<12)|(0<<10)|(0<<8)|110;
    alfabe[14]=(3<<14)|(3<<12)|(3<<10)|(0<<8)|111;
    alfabe[15]=(1<<14)|(3<<12)|(3<<10)|(1<<8)|112;
    alfabe[16]=(3<<14)|(3<<12)|(1<<10)|(3<<8)|113;
    alfabe[17]=(1<<14)|(3<<12)|(1<<10)|(0<<8)|114;
    alfabe[18]=(1<<14)|(1<<12)|(1<<10)|(0<<8)|115;
    alfabe[19]=(3<<14)|(0<<12)|(0<<10)|(0<<8)|116;
    alfabe[20]=(1<<14)|(1<<12)|(3<<10)|(0<<8)|117;
    alfabe[21]=(1<<14)|(1<<12)|(1<<10)|(3<<8)|118;
    alfabe[22]=(1<<14)|(3<<12)|(3<<10)|(0<<8)|119;
    alfabe[23]=(3<<14)|(1<<12)|(1<<10)|(3<<8)|120;
    alfabe[24]=(3<<14)|(1<<12)|(3<<10)|(3<<8)|121;
    alfabe[25]=(3<<14)|(3<<12)|(1<<10)|(1<<8)|122;

    printf("Mors alfabesinde karsiligini gormek istediginiz metni giriniz:");
    scanf("%s",gir_metin);
    strlwr(gir_metin);
    uzunluk=strlen(gir_metin);

    for(i=0; i<uzunluk; i++)
    {
        for(j=0; j<26; j++)
        {
            if(gir_metin[i]==(alfabe[j]&255))
            {
                harf=alfabe[j]&255;
                veri1=(alfabe[j]>>14)&3;
                veri2=(alfabe[j]>>12)&3;
                veri3=(alfabe[j]>>10)&3;
                veri4=(alfabe[j]>>8)&3;

            }

        }
        printf("   %c\n",harf);
        vurus(veri1);
        vurus(veri2);
        vurus(veri3);
        vurus(veri4);
        printf(" ------\n");

    }


    return 0;
}

void vurus(int veri)
{
    switch(veri)
    {
    case 0:
        break;
    case 1:
        printf("  kisa\n");
        break;
    case 3:
        printf("  uzun\n");
        break;
    }

}

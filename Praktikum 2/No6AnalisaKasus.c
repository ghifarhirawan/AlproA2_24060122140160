/*
Nama Program  : BukanPilihanMenuYangBenar
Deskripsi     : menuliskan hasil operasi aritmatika terhadap kedua bilangan
Nama Pembuat  : Ahmad Muhammad Ghifar Hirawan
NIM           : 24060122140160
Tanggal       : 29 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iA, iB;
    char car;


    printf("Masukkan pilihan character: ");
    scanf("%c", &car);


    if(car > 'f'){
        printf("Bukan pilihan menu yang benar. ");
    }
    else {
            printf("Masukkan nilai iA: ");
            scanf("%d", &iA);
            printf("Masukkan nilai iB: ");
            scanf("%d", &iB);
            switch(car){
            case 'a':
                printf("%d + %d = %d", iA, iB, iA + iB);
                break;
            case 'b':
                printf("%d - %d = %d", iA, iB, iA - iB);
                break;
            case 'c':
                printf("%d * %d = %d", iA, iB, iA * iB);
                break;
            case 'd':
                printf("%d / %d = %.3f", iA, iB, (float) iA / iB);
                break;
            case 'e':
                printf("%d / %d = %d", iA, iB, iA / iB);
                break;
            case 'f':
                printf("%d mod %d = %d", iA, iB, iA % iB);
                break;
    }
    }

    return 0;
}

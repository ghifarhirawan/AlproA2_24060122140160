/*
Nama Program  : BukanTermasukSebuahBilangan
Deskripsi     : menentukan integer bilangan positif, negative, atau nol
Nama Pembuat  : Ahmad Muhammad Ghifar Hirawan
NIM           : 24060122140160
Tanggal       : 29 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int x;

    //algoritma
    printf("Masukkan Nilai : ");
    scanf("%d", &x);

    if (x>0){
        printf("Bilangan Bulat Positif");
    }
    else if (x<0){
        printf("Bilangan Bulat Negatif");
    }
    else{
        printf("Bilangan nol");
    }
    return 0;
}

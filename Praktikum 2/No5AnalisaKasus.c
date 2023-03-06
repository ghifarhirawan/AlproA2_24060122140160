/*
Nama Program  : TerdapatNilaiYangBukanSegitiga
Deskripsi     : menentukan jenis segitiga daru integer
Nama Pembuat  : Ahmad Muhammad Ghifar Hirawan
NIM           : 24060122140160
Tanggal       : 29 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int a;
    int b;
    int c;

    //algoritma
    printf("Masukkan sisi a : ");
    scanf("%d", &a);
    printf("Masukkan sisi b : ");
    scanf("%d", &b);
    printf("Masukkan sisi c : ");
    scanf("%d", &c);

    if(a==b && a == c && b ==c){
        printf("Segitiga sama sisi-sisi");
    }
    else if(a==b || a == c || b ==c){
        printf("Segitiga sama kaki");
    }
    else{
        printf("Segitiga Sembarang");
    }

    return 0;
}

/*
Nama Program  : MasukkanTahananTidakBolehNegatif
Deskripsi     : menerima 3 buah tahanan yang dimasukan menggunakan keyboard dan menghasilkan total tahanan jika dirangkai seri
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
    printf("Masukkan Angka Tahanan : ");
    scanf("%d", &a);
    printf("Masukkan Angka Tahanan : ");
    scanf("%d", &b);
    printf("Masukkan Angka Tahanan : ");
    scanf("%d", &c);

    if(a>0&&b>0%c>0){
        printf("%d", a+b+c);
    }
    else{
        printf("Masukkan Tahanan tidak boleh negatif");
    }

    return 0;
}

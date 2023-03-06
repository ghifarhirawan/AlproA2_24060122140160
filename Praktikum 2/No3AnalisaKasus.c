/*
Nama Program  : MasukkanNomorBulanTidakTepat
Deskripsi     : Menentukan Nama Bulan
Nama Pembuat  : Ahmad Muhammad Ghifar Hirawan
NIM           : 24060122140160
Tanggal       : 29 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i;

    //algoritma
    printf("Masukkan Bulan Dalam Angka : ");
    scanf("%d", &i);

    switch(i){
    case 1:
        printf("Januari");
        break;
    case 2:
        printf("Februari");
        break;
    case 3:
        printf("Maret");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mei");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("Agustus");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("Desember");
        break;
    case 12:
        printf("Januari");
        break;
    default:
        printf("Masukan nomer  bulan tidak tepat");
    }
    return 0;
}

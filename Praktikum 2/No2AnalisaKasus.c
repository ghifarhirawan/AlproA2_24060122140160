/*
Nama Program  : MasukanNomorHariTidakTepat
Deskripsi     : Menentukan Nama Hari
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
    printf("Masukkan Hari Dalam Angka: ");
    scanf("%d", &i);

    switch(i){
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;

    default:
        printf("Masukan nomer hari tidak tepat");
    }
    return 0;
}

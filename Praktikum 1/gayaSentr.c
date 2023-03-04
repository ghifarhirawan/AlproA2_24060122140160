/*
Nama Program  : Gaya Sentripeta;
Deskripsi     : Menghitung dan menampilkan gaya sentripetal
Nama Pembuat  : AHMAD MUHAMMAD GHIFAR HIRAWAN
NIM           : 24060122140160
Tanggal       : 27 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    float m ;
    float v ;
    float r ;
    float F ;

    //algoritma
    printf("Masukin Nilai m :");
    scanf("%f", &m);
    printf("Masukin Nilai v :");
    scanf("%f", &v);
    printf("Masukin Nilai r :");
    scanf("%f", &r);

    F = m*((v*v)/r);

    printf("gaya Sentr : %.1f", F) ;
    return 0;

}

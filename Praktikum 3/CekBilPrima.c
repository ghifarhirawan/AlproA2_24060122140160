#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, jumlahfaktor =0;

    printf("Masukkan nilai yang ingin dicek: ");
    scanf("%d", &N);

    if(N <0 ){
        printf("Masukan nilai harus positif. ");
    }
    else{
        for (i = 1; N > 0 && i<=N; i++){
            if (N % i == 0){
                jumlahfaktor++;
                }
            }
            printf("Jumlah Faktor: %d\n", jumlahfaktor);
        if (jumlahfaktor == 2){
            printf("Adalah bilangan prima. ");
        }
        else{
            printf("Bukan bilangan prima. ");
        }
    }
        return 0;
    }



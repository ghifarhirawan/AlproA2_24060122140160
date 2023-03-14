#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, jumlah = 0;

    printf("Masukkan nilai: ");
    scanf("%d", &N);
    if (N < 0){
        printf("Masukan nilai harus positif. ");
    }
    else {
        for (i = 1; N > 0 && i<N; i++){
            if (N % i == 0){
                jumlah += i;
    ;        }
            }
        if (jumlah == N){
            printf("Adalah bilangan sempurna.");
        }
        else{
            printf("Bukan bilangan sempurna. ");
        }
    }
    return 0;
    }

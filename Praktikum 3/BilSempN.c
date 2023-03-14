#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, N, jumlah;

    scanf("%d", &N);

    if (N < 0){
        printf("Masukan nilai harus positif. ");
    }
    else {

        for (i = 1; N > 0 && i<=N; i++){
            jumlah = 0;
            for (j = 1; j < i; j++){
                if (i % j == 0){
                    jumlah+=j;
                }
            }
            if (jumlah == i){
                printf("%d Adalah bilangan sempurna.\n", i);
            }
        }
    }
    return 0;
}

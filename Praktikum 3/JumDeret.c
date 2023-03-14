#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, totalderet;


    totalderet = 0;
    printf("Masukkan nilai deret: ");
    scanf("%d", &N);
    for (i = 1; N>0 && i<=N; i++){
        totalderet += i;
    }
    printf("Nilai total deret adalah:  %d", totalderet);

    return 0;
}

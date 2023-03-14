#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;

    printf("Masukkan nilai yang ingin dicek: ");
    scanf("%d", &N);

    for (i = 1; i <= N && N >0; i++){
        if (N % i == 0){
            printf("%d, ", i);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, ukuran1, sama = 0, ukuran2, *array_1, *array_2;

    printf("Masukkan ukuran array 1: ");
    scanf("%d", &ukuran1);

    printf("Masukkan ukuran array 2: ");
    scanf("%d", &ukuran2);

    array_1 = (int*)malloc(ukuran1 * sizeof(int));
    array_2 = (int*)malloc(ukuran2 * sizeof(int));

    printf("Masukkan elemen array 1:\n");
    for (i = 0; i < ukuran1; i++){
        scanf("%d", &array_1[i]);
    }

    printf("Masukkan elemen array 2:\n");
    for (i = 0; i < ukuran2; i++){
        scanf("%d", &array_2[i]);
    }

    if (ukuran1 != ukuran2){
        printf("Tidak Simetris. ");
    }
    else{
        for (i = 0; i<ukuran1; i++){
            if (array_1[i] != array_2[i]){
                printf("Masuk sini masbro");
                sama++;
            }
        }
    if (sama > 0){
        printf("Tidak Simetri. ");
    }
    else{
        printf("Simetri");
    }
    }

    return 0;
}

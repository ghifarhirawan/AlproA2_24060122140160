#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, ukuran, max1 = 0, max2 = 0;
    int *array_int;
    printf("Masukkan ukuran array: ");
    scanf("%d", &ukuran);

    array_int = (int*)malloc(ukuran * sizeof(int));

    if (ukuran < 1){
        printf("Masukan harus positif. ");
    }
    else{
        printf("Masukkan nilai array: \n");
        for (i = 0; i < ukuran; i++){
            scanf("%d", &array_int[i]);
            if (array_int[i] < 1){
                printf("Elemen harus positif. ");
                break;
            }
        }

        for (i = 0; i < ukuran; i++){
            if (array_int[i] > max1){
                max2 = max1;
                max1 = array_int[i];
            }
            else if(array_int[i]>max2 && array_int[i] != max1){
                max2 = array_int[i];
            }
        }
        printf("\n\nNilai kedua terbesar adalah: %d", max2);
    }
    return 0;
}

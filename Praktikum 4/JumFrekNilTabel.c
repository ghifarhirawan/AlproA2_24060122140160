#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, ukuran, sama, nomor, jumlah = 0, *array_int;

    printf("Masukkan ukuran array: ");
    scanf("%d", &ukuran);

    array_int = (int*)malloc(ukuran * sizeof(int));

    for (i = 0; i<ukuran; i++){
        scanf("%d", &array_int[i]);
    }

    for (i = 0; i<ukuran; i++){
        sama = 0;
        for (j = 0 ; j < ukuran; j++){
            if (array_int[i] == array_int[j]){
                sama++;
            }
        }
        if (sama > 1){
            jumlah+=array_int[i];
        }
    }

    printf("%d", jumlah);
    return 0;
}

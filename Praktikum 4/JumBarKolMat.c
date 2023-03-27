#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int matriks[3][4] = {{1, 3, 5, 7}, {6, 2, 5, 2}, {1, 4, 2, 4}};
    //int baris = sizeof(matriks)/sizeof(matriks[0]);
    //int kolom = sizeof(matriks[0])/sizeof(matriks[0][0]);
    //int i, j, jumlah = 0;

    int i, j, baris, kolom, jumlah = 0, **matriks;

    printf("Masukkan ukuran baris: ");
    scanf("%d", &baris);

    printf("Masukkan ukuran kolom: ");
    scanf("%d", &kolom);

    matriks = (int**)malloc(baris * sizeof(int*));
    for (i = 0; i < baris; i++){
        matriks[i] = (int*)malloc(kolom * sizeof(int));
    }

    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            printf("Masukkan elemen baris %d: ", i+1);
            scanf("%d", &matriks[i][j]);
        }
    }

    for (i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            printf("%d\t", matriks[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < baris; i++){
        jumlah = 0;
        for (j = 0; j < kolom; j++){
            jumlah+=matriks[i][j];
        }
        printf("Jumlah baris %d adalah: %d\n", i+1, jumlah);
    }

    for (j = 0; j < kolom; j++){
        jumlah = 0;
        for (i = 0; i < baris; i++){
            jumlah+=matriks[i][j];
        }
        printf("Jumlah kolom %d adalah: %d\n", j+1, jumlah);
    }

    return 0;
}

/*
Nama Program  : ascending.c
Nama Pembuat  : AHMAD MUHAMMAD GHIFAR HIRAWAN
NIM           : 24060122140160
Tanggal       : 13 Mei 2023
*/

#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {

    //KAMUS LOKAL
    int pass;
    int i;
    int temp;
    bool tukar;

    //ALGORITMA
    tukar = true;
    pass = 1;
    while (pass <= n-1 && tukar)  {
        tukar = false;
        int i = 0;
        for(i = 0; i<n;i++){
            if (arr[i] < arr[i - 1]) {
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                tukar = true;
            }
        }
        pass++;
    }
}

int main() {

    //KAMUS LOKAL
    int arr[] = {10,34,22,5,4,19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    //ALGORITMA
    bubbleSort(arr, n);
    printf("Array yang sudah berurutan: \n");
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    return 0;
}

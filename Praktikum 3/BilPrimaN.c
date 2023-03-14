#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, N, faktor;

    scanf("%d", &N);

    for (i = 1; i<=N && N>0 ; i++){
        faktor = 0;
        for (j = 1; j<=i; j++){
            if (i % j == 0){
                faktor++;
            }
        }
        if (faktor == 2){
            printf("%d Adalah bilangan prima. \n", i);
        }
    }

   return 0;
}

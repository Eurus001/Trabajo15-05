#include <stdio.h>

void SumarMatrices(int matriz1[3][3], int matriz2[3][3]);

int main(){

    int x;

    printf("Suma de 2 matrices de 3x3\n");

    int matriz1[3][3];
    int matriz2[3][3];

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Ingrese el elemento (%d,%d) de la primera matriz", i+1, j+1);
            scanf("%d", &x);
            matriz1[i][j] = x;
        }
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Ingrese el elemento (%d,%d) de la segunda matriz", i+1, j+1);
            scanf("%d", &x);
            matriz2[i][j] = x;
        }
    }

    SumarMatrices(matriz1, matriz2);

    return 0;
}

void SumarMatrices(int matriz1[3][3], int matriz2[3][3]){
    int matriz3[3][3];

     for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\nLa matriz resultante es: \n");

     for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", matriz3[i][j]);
        }
        printf("\n");
    }

}

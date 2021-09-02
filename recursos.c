/*
 * File:   Ordenar.c
 * Author: joel
 *
 * Created on 2 sep. 2021, 02:36:54
 */

#include <stdio.h> 
#include <stdbool.h>
#include "cabecera.h"
//funcion de recorrer un array

int recorrerE(int *array, size_t tamanio) {
    printf("\nRecorriendo el array\n");
    if (tamanio > 0) {
        for (int i = 0; i < tamanio; i++) {
            printf("%i, ", array[i]);
        }
        return (1);
    } else {
        printf("\nIntroduzca 1 para retornar la funcion");
        return (0);
    }
}

int recorrerZ(double *array, size_t tamanio) {
    printf("\nRecorriendo el array\n");
    if (tamanio > 0) {
        for (int i = 0; i < tamanio; i++) {
            printf("%lf, ", array[i]);
        }
        return (1);
    } else {
        printf("\nIntroduzca 1 para retornar la funcion");
        return (0);
    }
}

int recorrerF(float *array, size_t tamanio) {
    printf("\nRecorriendo el array\n");
    if (tamanio > 0) {
        for (int i = 0; i < tamanio; i++) {
            printf("%f.2, ", array[i]);
        }
        return (1);
    } else {
        printf("\nIntroduzca 1 para retornar la funcion");
        return (0);
    }

}

int recorrerC(char *array, size_t tamanio) {
    printf("\nRecorriendo el array\n");
    if (tamanio > 0) {
        for (int i = 0; i < tamanio; i++) {
            printf("%c, ", array[i]);
        }
        return (1);
    } else {
        printf("\nIntroduzca 1 para retornar la funcion");
        return (0);
    }

}

//funcion de ordenar el array

int ordenarE(int *array, size_t tamanio) {
    int aux = 0;
    printf("\n\nArray ordenado");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < (tamanio - 1); j++) {
            if (array[j] > array[(j + 1)]) {
                aux = array[j];
                array[j] = array[(j + 1)];
                array[(j + 1)] = aux;
            }
        }
    }
}

int ordenarZ(double *array, size_t tamanio) {
    int aux = 0;
    printf("\n\nArray ordenado");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < (tamanio - 1); j++) {
            if (array[j] > array[(j + 1)]) {
                aux = array[j];
                array[j] = array[(j + 1)];
                array[(j + 1)] = aux;
            }
        }
    }
}

int ordenarF(float *array, size_t tamanio) {
    int aux = 0;
    printf("\n\nArray ordenado");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < (tamanio - 1); j++) {
            if (array[j] > array[(j + 1)]) {
                aux = array[j];
                array[j] = array[(j + 1)];
                array[(j + 1)] = aux;
            }
        }
    }
}

int ordenarC(char *array, size_t tamanio) {
    int aux = 0;
    printf("\n\nArray ordenado");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < (tamanio - 1); j++) {
            if (array[j] > array[(j + 1)]) {
                aux = array[j];
                array[j] = array[(j + 1)];
                array[(j + 1)] = aux;
            }
        }
    }
}
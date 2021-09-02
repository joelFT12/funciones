/*
 * File:   Ordenar.c
 * Author: joel
 *
 * Created on 2 sep. 2021, 02:36:54
 */

#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"

int main(int argc, char** argv) {

    char letras [] = {'A', 'b', 'a', 'B'};
    int num[] = {4, 9, 1};
    size_t tamanio = len(letras);

    recorrer(letras, tamanio);
    ordenar(letras, tamanio);
    recorrer(letras, tamanio);
    return (EXIT_SUCCESS);
}


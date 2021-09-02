/*
 * File:   Ordenar.c
 * Author: joel
 *
 * Created on 2 sep. 2021, 02:36:54
 */

#ifndef CABECERA_H
#define CABECERA_H
#define len(x) (sizeof(x)/sizeof((x)[0]))

//recorriendo el array
#define recorrer(array,tamanio) _Generic((array), \
int*: recorrerE, \
double*: recorrerZ, \
float*: recorrerF, \
char*: recorrerC \
)(array,tamanio)

//prototipo de la recorrer un array
int recorrerE(int *array, size_t tamanio);
int recorrerZ(double *array, size_t tamanio);
int recorrerF(float *array, size_t tamanio);
int recorrerC(char *array, size_t tamanio);


// ordenar el array
#define ordenar(array,tamanio) _Generic((array), \
int*: ordenarE, \
double*: ordenarZ, \
float*: ordenarF, \
char*: ordenarC \
)(array,tamanio)

//prototipo para ordenar un array
int ordenarE(int *array, size_t tamanio);
int ordenarZ(double *array, size_t tamanio);
int ordenarF(float *array, size_t tamanio);
int ordenarC(char *array, size_t tamanio);



#endif /* CABECERA_H */


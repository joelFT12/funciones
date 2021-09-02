/*
 * File:   Ordenar.c
 * Author: joel
 *
 * Created on 2 sep. 2021, 02:36:54
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../cabecera.h"

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testOrdenarE() {
    int array[] = {4, 7, 1};
    size_t tamanio = len(array);
    CU_ASSERT(ordenarE(array, tamanio));
    CU_ASSERT(array[0] < array[1]);

}

void testOrdenarZ() {
    double array[] = {4.9, 7.1, 1.0};
    size_t tamanio = len(array);
    CU_ASSERT(ordenarZ(array, tamanio));
    CU_ASSERT(array[0] < array[1]);

}

void testOrdenarF() {
    float array[] = {4.56, 7.7, 1.2};
    size_t tamanio = len(array);
    CU_ASSERT(ordenarF(array, tamanio));
    CU_ASSERT(array[0] < array[1]);

}

void testOrdenarC() {
    char array[] = {'c', 'a', 'b'};
    size_t tamanio = len(array);
    CU_ASSERT(ordenarC(array, tamanio));
    CU_ASSERT(array[0] < array[1]);

}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("Ordenar", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testOrdenarE", testOrdenarE)) ||
            (NULL == CU_add_test(pSuite, "testOrdenarZ", testOrdenarZ)) ||
            (NULL == CU_add_test(pSuite, "testOrdenarF", testOrdenarF)) ||
            (NULL == CU_add_test(pSuite, "testOrdenarC", testOrdenarC))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}

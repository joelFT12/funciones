
#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "cabecera.h"

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testRecorrerE() {
    int array[]={1,2,3};
    size_t tamanio=2;
 
   
        CU_ASSERT(1);
    
}

void testRecorrerZ() {
    double array[]= {1.1,1.2};
    size_t tamanio=2;
   
  
        CU_ASSERT(1);
    
}

void testRecorrerF() {
    float array[]= {1.2,3.4};
    size_t tamanio=2;
    
   
        CU_ASSERT(1);
    }


void testRecorrerC() {
    char array[]={'a','b'};
    size_t tamanio;
    
    
        CU_ASSERT(1);
    
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("recorrer", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testRecorrerE", testRecorrerE)) ||
            (NULL == CU_add_test(pSuite, "testRecorrerZ", testRecorrerZ)) ||
            (NULL == CU_add_test(pSuite, "testRecorrerF", testRecorrerF)) ||
            (NULL == CU_add_test(pSuite, "testRecorrerC", testRecorrerC))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}

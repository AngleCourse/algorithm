
#ifndef TESTSORT_H
#define TESTSORT_H


#include <stdlib.h>
#include "testlib.h"
#include "../sort.h"

void testInsertSort(){
    int length = 1;
    int i = 0;
    int *data_set;
    for(i = 0; i < 3; i++){
        data_set = dataGenerator(length); 
        parray(data_set, 0, length);
        insertSort(data_set, length);
        parray(data_set, 0, length);
        free(data_set);
        length *= 10;
    }
}
#endif

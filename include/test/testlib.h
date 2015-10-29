
#ifndef TESTLIB_H
#define TESTLIB_H
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

extern const int DATA_SET_SCALE; 
/*
 * Generate random data set of size length with 
 * random data in the range [0~DATA_SET_SCALE-1]
 */
int *dataGenerator(int length){
    srand((unsigned int)time(NULL));
    int * result;
    result = (int *)malloc(sizeof(int)*length);
    int i = 0;
    for(i = 0; i < length; i++){
        result[i] = random() % DATA_SET_SCALE;
    }
    return result;
}

/**
 * Print the input array from index start to end.
 */
void parray(int *array, int start, int end){
    if(start > end){
        return;
    }
    printf("Size:%d [", end - start);
    int i = 0;
    for(i = start; i < end; i++){
        printf(" %d ",array[i] 
    }
    printf("]\n");
}
#endif

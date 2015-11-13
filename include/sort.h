/////////////////////////////
//File: sort.h
//
//Sorting algorithms
/////////////////////////////

#ifndef SORT_H
#define SORT_H

void insertSort(int *array, int length){
    int j = 0;
    for(j = 1; j < length; j++){
        int key = array[j];
        int i = j - 1;
        while(i >= 0 && array[i] > key){
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = key;
    }
}
#endif

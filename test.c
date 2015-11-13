
/**
 * Testing engine for all implemented algorithms.
 *
 * The following is the algorithm list:
 *  
 */

//#include "include/test/testlib.h"    //include the test suite.
#include "include/test/testsort.h"

const int DATA_SET_SCALE = 100;

void testSorting();


int main(void){
    //testSorting();
    printf("size of poiner: %d\n", (int)sizeof(void *));
    return 0;
}
void testSorting(){
    testInsertSort();
}

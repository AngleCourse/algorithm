
#include "include/test/testlib.h"

int main(void){
    struct test1{
        void * p;
        int q;
    };
    struct test1 t1;
    printf("the size of struct test1 is : %d\n", (int)sizeof(t1));
}


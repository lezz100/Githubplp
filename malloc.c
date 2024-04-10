#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    // printf("Try programiz.pro");
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    *ptr = 100; 
    printf("Value at ptr = %d\n", *ptr);
    free(ptr);
    return 0;
}
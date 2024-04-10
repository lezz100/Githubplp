#include <stdio.h>
#include <stdlib.h>
int main (){
    int *array;
    int current_size = 5;
    array = (int*)malloc (current_size *sizeof(int));

    if(array == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    // Initializing array
    for (int i = 0, i < current_size, i++){
        array [i] = i*i;
    }
    // Resizing array
    int new_size = 10;
    array = (int*)realloc (array,new_size *sizeof(int));
    if (array == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    //Initializing new elements
    for(int i = current_size; i< new_size;i++){
        array[i] = i*i;
    }
    //Using the array
    for (int i=0;i<new_size;i++){
        printf("%d",array[i]);
    }
    printf("\n");
    free(array);

    return 0;
}

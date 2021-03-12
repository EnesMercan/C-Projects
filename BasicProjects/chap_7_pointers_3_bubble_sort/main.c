#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

void bubleSort(int * const [], size_t);
void swap(int *, int *);

int main(void){
    
    int sayilar[SIZE];
    srand(time('\0'));
    
    for(size_t i=0; i<SIZE; i++){
        sayilar[i] = (rand() % 49) + 1;
        printf("%3d  ", sayilar[i]);
    }
    putchar(10);
    
    bubleSort(sayilar, SIZE);
    
    for(size_t i=0; i<SIZE; i++){
        sayilar[i] = (rand() % 49) + 1;
        printf("%3d  ", sayilar[i]);
    }
    
    return 0;
}

void bubleSort(int * const array[], size_t size){
    
    //void swap(int *, int *);
    unsigned int pass;
    size_t j;
    
    for(pass = 0; pass<size-1; ++pass)
        for(j = pass+1; j<size-1; ++j)
            if(array[pass] > array[j])
                swap(array[pass], array[j]);
}

void swap(int * number1, int * number2){
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

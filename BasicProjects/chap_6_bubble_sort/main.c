//
//  main.c
//  chap_6_bubble_sort
//
//  Created by Alexander on 7/30/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

#define SIZE 50

void create(int [], size_t);
void sort(int [], size_t);
void display(int [], size_t);

int main(int argc, const char * argv[]) {
    
    int dizi[SIZE];
    
    create(dizi, SIZE);
    display(dizi, SIZE);
    sort(dizi, SIZE);
    display(dizi, SIZE);
    
    return 0;
}

void create(int temp[], size_t size){
    srand(time(NULL));
    
    for(size_t i=0; i<size; i++)
        temp[i]=rand() % 1000;
    }

void display(int array[], size_t lenght){
    putchar(10);
    for(unsigned int i=0; i<lenght; i++)
        printf("\ndizi[%2u]=%6d", i, array[i]);
    putchar(10);
}

void sort(int sorted[], size_t size){
    
    unsigned int temp=0;
    
    for(unsigned int i=0; i<size; i++)
        for (unsigned int j=i+1; j<size; j++) {
            if(sorted[i]<sorted[j]){
                temp=sorted[j];
                sorted[j]=sorted[i];
                sorted[i]=temp;
            }
        }
}

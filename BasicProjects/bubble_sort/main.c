//
//  main.c
//  bubble_sort
//
//  Created by Alexander on 2/1/20.
//  Copyright © 2020 Alexander. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define BORDER 100


int main(int argc, const char * argv[]) {
    
    register unsigned short int i=0;
    register unsigned short int j=0;
    signed long long int matris[SIZE];
    signed long long int temporary=0;
    
    srand(time(0));
    
    printf("\nthe array is:\n");
    
    for(;i<SIZE;i++){
        matris[i]=rand()%BORDER;
        printf("%lld ",matris[i]);
    }
    putchar(10);
    putchar(10);

    //biggest to lowest
    
    puts("\nbiggest to lowest");
    i=0;
    for(;i<SIZE;i++){
        for(j=i+1;j<SIZE;j++){
            if(matris[i]<matris[j]){
                temporary=matris[i];
                matris[i]=matris[j];
                matris[j]=temporary;
            }
        }
    }
    i=0;
    for(;i<SIZE;i++){
        printf("%lld ",matris[i]);
    }
    putchar(10);
    putchar(10);

    //lowest to biggest
    puts("lowest to bigest");
    i=0;
    for(;i<SIZE;i++){
        for(j=i+1;j<SIZE;j++){
            if(matris[i]>matris[j]){
                temporary=matris[i];
                matris[i]=matris[j];
                matris[j]=temporary;
            }
        }
    }
    i=0;
    for(;i<SIZE;i++){
        printf("%lld ",matris[i]);
    }
    putchar(10);
    putchar(10);
    
    return 0;
}
